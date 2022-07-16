//  A = [-2, 1, -4, 5, 3]
// ans = 1

pair<int,int> fun(vector<int> &A,int l,int r){
    if(l==r)
        return {A[l],A[r]};
    int mid=l+(r-l)/2;
    pair<int,int> f=fun(A,l,mid);
    pair<int,int> s=fun(A,mid+1,r);
    int mini=f.first<s.first?f.first:s.first;
    int maxi=f.second>s.second?f.second:s.second;
    return {mini,maxi};
}

int Solution::solve(vector<int> &A) {
    pair<int,int> ans=fun(A,0,A.size()-1);
    return ans.first+ans.second;
}
