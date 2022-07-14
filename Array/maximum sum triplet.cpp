 // A = [2, 5, 3, 1, 4, 9]
 // ans = 16

int solve(vector<int> &A){
  int n=A.size();
  int ans=0;
  vector<int> maxRight(n);
  maxRight[n-1]=A[n-1];
  for(int i=n-2;i>=0;i--)
    maxRight[i]=max(maxRight[i+1],A[i]);
  set<int> st;
  st.insert(A[0]);
  for(int i=1;i<n-1;i++){
    int b=A[i];
    int c=maxRight[i+1];
    auto it=st.lower_bound(A[i]);
    it--;
    if(it!=st.end() && b<c && *it<b)
      ans=max(ans,*it+b+c);
    st.insert(A[i]);
  }
  return ans;
}
