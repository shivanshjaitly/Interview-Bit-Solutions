// n = 3
// ans = [1,3,3,1]

vector<int> getRow(int n){
  vector<int> ans;
  int val=1;
  for(int 0;i<=n;i++){
    ans.push_back(val);
    val=val*(n-i)/(i+1);
  }
  return ans;
}
