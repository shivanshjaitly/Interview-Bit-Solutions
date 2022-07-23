// Bucketing Concept

// A = [1, 10, 5]
// ans = 5


int maximumGap(const vector<int> &A) {
    int maxVal=*max_element(A.begin(),A.end()),minVal=*min_element(A.begin(),A.end());
    int n=A.size();
    vector<int> bmax(n-1,INT_MIN);
    vector<int> bmin(n-1,INT_MAX);
    float divide=(float)(maxVal-minVal)/(float)(n-1);
    for(int i=0;i<n;i++){
        if(A[i]==minVal || A[i]==maxVal)
            continue;
        int index=(A[i]-minVal)/divide;
        bmax[index]=max(bmax[index],A[i]);
        bmin[index]=min(bmin[index],A[i]);
    }
    int prev=minVal;
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(bmin[i]==INT_MAX)
            continue;
        ans=max(ans,bmin[i]-prev);
        prev=bmax[i];
    }
    ans=max(ans,maxVal-prev);
    return ans;
}
