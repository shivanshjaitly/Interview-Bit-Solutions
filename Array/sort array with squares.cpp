// Two pointers approach

// A = [-6, -3, -1, 2, 4, 5]
// ans = [1, 4, 9, 16, 25, 36]


vector<int> solve(vector<int> &A) {
    int n=A.size();
    vector<int> ans(n);
    int i=0,j=n-1,k=n-1;
    while(i<=j){
        if(A[i]*A[i]>A[j]*A[j]){
            ans[k--]=A[i]*A[i];
            i++;
        }else{
            ans[k--]=A[j]*A[j];
            j--;
        }
    }
    return ans;
}
