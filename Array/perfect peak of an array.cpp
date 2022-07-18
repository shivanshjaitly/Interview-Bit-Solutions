// A = [5, 1, 4, 3, 6, 8, 10, 7, 9]
// ans = 1

// A = [5, 1, 4, 4]
// ans = 0

int perfectPeak(vector<int> &A) {
    vector<int> maxi(A.size());
    maxi[0]=A[0];
    for(int i=1;i<A.size();i++)
        maxi[i]=max(maxi[i-1],A[i]);
    vector<int> mini(A.size());
    mini[A.size()-1]=A[A.size()-1];
    for(int i=A.size()-2;i>=0;i--)
        mini[i]=min(mini[i+1],A[i]);
    for(int i=1;i<A.size()-1;i++){
        int prev=maxi[i-1];
        int next=mini[i+1];
        if(A[i]>prev && A[i]<next)
            return 1;
    }
    return 0;
}
