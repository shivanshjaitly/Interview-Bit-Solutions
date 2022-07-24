/* [
    [1, 2],
    [3, 4]
   ] 

   [
    [3,1],
    [4,2]
   ]

*/

void transpose(vector<vector<int>> &A){
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A[0].size();j++)
            swap(A[i][j],A[j][i]);
    }
}

void reflect(vector<vector<int>> &A){
    int n=A.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++)
            swap(A[i][j],A[i][n-j-1]);
    }
}

void Solution::rotate(vector<vector<int> > &A) {
    transpose(A);
    reflect(A);
}
