// A = [2, 1, 6, 4]
// ans = 1

int Solution::solve(vector<int> &A) {
    int odd_sum=0,even_sum=0,n=A.size(),ans=0;
    vector<int> v(n);
    for(int i=n-1;i>=0;i--){
        v[i]=A[i];
        if(i+2<A.size())
            v[i]+=v[i+2];
    }
    for(int i=0;i<n;i++){
        int odd=0,even=0;
        if(i%2==0){
            if(i+1<n)
                even+=v[i+1];
            if(i+2<n)
                odd+=v[i+2];
        }else{
            if(i+1<n)
                odd+=v[i+1];
            if(i+2<n)
                even+=v[i+2];
        }
        if(odd_sum+odd==even_sum+even)
            ans++;
        if(i%2)
            odd_sum+=A[i];
        else
            even_sum+=A[i];
    }
    return ans;
}
