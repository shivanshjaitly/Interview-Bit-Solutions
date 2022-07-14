// A = [ 0, 0, 1, 1, 1, 0, 0, 1].
// B = 3
// Ans = 2


int solve(vector<int> &A,int B){
  int i=0,ans=0,n=A.size();
  while(i<n){
    int low=max(0,i-(B-1));
    int high=min(n-1,i+(B-1));
    int c=0;
    for(int k=high;k>=low;k--){
      if(A[k]==1){
        ans++;
        c++;
        i=k+B;
        break;
      }
    }
    if(c==0)
      return -1;
  }
  return ans;
}
