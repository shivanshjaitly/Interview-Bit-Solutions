// A = [1, 2, 3, 0, 3]
// ans = 2

int solve(int A, vector<int> &B) {
    vector<int> count(A);
    int s=0;
    for(int i=0;i<A;i++)
        s+=B[i];
    if(s%3!=0)
        return 0;
    s/=3;
    int ss=0;
    for(int i=A-1;i>=0;i--){
        ss+=B[i];
        if(ss==s)
            count[i]=1;
    }
    for(int i=A-2;i>=0;i--)
        count[i]+=count[i+1];
    int ans=0;
    ss=0;
    for(int i=0;i<A-2;i++){
        ss+=B[i];
        if(ss==s)
            ans+=count[i+2];
    }
    return ans;
}

