// A = [1, 2, 3, 4, -10]
// ans = 10

int maxSubArray(const vector<int> &A) {
    int max_so_far=INT_MIN;
    int curr_sum=0;
    int n=A.size();
    if(n==1)
        return A[0];
    for(int i=0;i<n;i++){
        curr_sum+=A[i];
        max_so_far=max(max_so_far,curr_sum);
        if(curr_sum<0)
            curr_sum=0;
    }
    return max_so_far;
}
