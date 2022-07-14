// A=[1, 3, -1]
// ans = 5

int maxArr(vector<int> &A) {
    int max1=INT_MIN/2,max2=INT_MIN/2;
    int min1=INT_MAX/2,min2=INT_MAX/2;
    for(int i=0;i<A.size();i++){
        max1=max(max1,A[i]+i);
        min1=min(min1,A[i]+i);
        max2=max(max2,A[i]-i);
        min2=min(min2,A[i]-i);
    }
    return max(max1-min1,max2-min2);
}
