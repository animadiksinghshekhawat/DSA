int func(int n,int m,int mid){
  long long ans=1;
  for(int i=0;i<n;i++){
    ans=ans*mid;
    if(ans>m) return 2;
  }
  if(ans==m) return 1;
  return 0;
}
int NthRoot(int n, int m) {
  int low=1,high=m;
  while(low<=high){
    int mid=(low+high)/2;
    if(func(n,m,mid)==1) return mid;
    else if(func(n,m,mid)==2) high=mid-1;
    else low=mid+1;
  }
  return -1;
}
