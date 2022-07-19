// A = 3
// ans = [[1,2,3],[8,9,4],[7,6,5]]


vector<vector<int> > generateMatrix(int A) {
    vector<vector<int>> ans(A,vector<int>(A,0));
    int val=1;
    int rowStart=0,rowEnd=A-1,colStart=0,colEnd=A-1;
    while(rowStart<A && rowEnd>=0 && colStart<A && colEnd>=0){
        // right
        for(int j=colStart;j<=colEnd;j++){
            ans[rowStart][j]=val;
            val++;
        }
        rowStart++; 
        // down
        for(int i=rowStart;i<=rowEnd;i++){
            ans[i][colEnd]=val;
            val++;
        }
        colEnd--;
        // left
        if(colStart<=colEnd){
            for(int j=colEnd;j>=colStart;j--){
                ans[rowEnd][j]=val;
                val++;
            }
        }
        rowEnd--;
        // up
        if(rowStart<=rowEnd){
            for(int i=rowEnd;i>=rowStart;i--){
                ans[i][colStart]=val;
                val++;
            }
        }
        colStart++;
    }
    return ans;
}
