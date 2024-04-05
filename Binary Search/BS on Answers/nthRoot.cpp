long long power(int mid, int num, int n){
  long long ans= 1;
  for(int i=0; i<num; i++){
    ans= ans * mid;
    if(ans > n) return 2;
  }
  if(ans== n) return 1;
  return 0;
}

int NthRoot(int n, int m) {
  // Write your code here.
  int low= 1;
  int high= m;

  while(low <= high){
    int mid= (low+high)/2;
    int ans= power(mid, n, m);
    if(ans==1) return mid;
    else if(ans==2) high= mid-1;
    else low= mid + 1;
  }

  return -1;
}

