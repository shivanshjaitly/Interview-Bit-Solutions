/*
       A = 1 2 3
       4 5 6
       7 8 9
       
   ans =[ 
          [1],
          [2, 4],
          [3, 5, 7],
          [6, 8],
          [9]
        ]
*/

vector<vector<int> >diagonal(vector<vector<int> > &A) {
    vector<vector<int>> ans;
    int n=A.size();
    // upper traingle column iterate
    for(int i=0;i<n;i++){
        int row=0,col=i;
        vector<int> temp;
        while(col>=0){
            temp.push_back(A[row][col]);
            row++;
            col--;
        }
        ans.push_back(temp);
    }
    // lower triangle row iterate
    for(int i=1;i<n;i++){
        int row=i,col=n-1;
        vector<int> temp;
        while(row<n){
            temp.push_back(A[row][col]);
            row++;
            col--;
        }
        ans.push_back(temp);
    }
    return ans;
}
