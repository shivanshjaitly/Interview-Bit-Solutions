// A = 5
/* ans = 
          [
            [1],
            [1,1],
            [1,2,1],
            [1,3,3,1],
            [1,4,6,4,1]
          ]
*/

vector<vector<int>> solve(int A) {
    vector<vector<int>> ans(A);
    for(int i=0;i<A;i++){
        ans[i].resize(i+1);
        ans[i][0]=1;
        ans[i][i]=1;
        for(int j=1;j<i;j++)
            ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
    }
    return ans;
}
