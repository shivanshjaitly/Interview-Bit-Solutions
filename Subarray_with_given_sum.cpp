class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int l =0;
        int sum = 0;

        for(int i=0;i < n;i++){
            sum += arr[i];
            if(sum == s){
                return {l+1, i+1};
            } else if(sum > s) {
                while(sum > s){
                    sum -= arr[l];
                    l++;
                }
                if(sum == s && l <= i){
                    return {l+1, i+1};
                }
            }
        }
        return {-1};
    }
};
