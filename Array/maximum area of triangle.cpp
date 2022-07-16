// A = ["rrrrr", "rrrrg", "rrrrr", "bbbbb"]
// ans = 10

int solve(vector<string> &A) {
  int row=A.size(),col=A[0].size();
  map<char,int> maxRow[col],minRow[col],maxCol,minCol;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      maxRow[j][A[i][j]]=max(maxRow[j][A[i][j]],i);
      if(minRow[j].count(A[i][j])
         minRow[j][A[i][j]]=min(minRow[A[i][j]],i);
      else
         minRow[j][A[i][j]]=i;
      maxCol[A[i][j]]=max(maxCol[A[i][j]],j);
      if(minCol.count([A[i][j]])
         minCol[A[i][j]]=min(minCol[A[i][j]],j);
      else
         minCol[A[i][j]]=j;
    }
  }
  int ans=0;
  for(int j=0;j<col;j++){
    int maxBase,maxHeight;
    // r g b
    if(maxRow[j].count('r') && maxRow[j].count('g') && maxCol.count('b')){
      maxBase=max(abs(maxRow[j]['r']-minRow[j]['g']),abs(minRow[j]['r']-maxRow[j]['g']))+1;
      maxHeight=max(abs(j-maxCol['b']),abs(j-minCol['b']))+1;     
      ans=max(ans,maxHeight*maxBase);
    }
    // g b r
    if(maxRow[j].count('g') && maxRow[j].count('b') && maxCol.count('r')){
      maxBase=max(abs(maxRow[j]['g']-minRow[j]['b']),abs(minRow[j]['g']-maxRow[j]['b']))+1;
      maxHeight=max(abs(j-maxCol['r']),abs(j-minCol['r']))+1;     
      ans=max(ans,maxHeight*maxBase);
    }
    // b r g
    if(maxRow[j].count('b') && maxRow[j].count('r') && maxCol.count('g')){
      maxBase=max(abs(maxRow[j]['b']-minRow[j]['r']),abs(minRow[j]['b']-maxRow[j]['r']))+1;
      maxHeight=max(abs(j-maxCol['g']),abs(j-minCol['g']))+1;     
      ans=max(ans,maxHeight*maxBase);
    }
    return ceil(ans/2.0);
}
