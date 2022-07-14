// [1, 2, 3]
// Ans = [1,2,4]

vector<int> plusOne(vector<int> &A) {
    vector<int> ans;
    int carry=1;
    int n=A.size();
    for(int i=n-1;i>=0;i--){
        int num=A[i];
        num+=carry;
        if(num>=10){
            int rem=num%10;
            ans.push_back(rem);
            carry=num/10;
        }else{
            ans.push_back(num);
            carry=0;
        }
    }
    if(carry==1)
        ans.push_back(carry);
    reverse(ans.begin(),ans.end());
    if(ans.size()==1)
        return ans;
    int count=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i]==0)
            count++;
        if(ans[i]>0)
            break;
    }
    ans.erase(ans.begin(),ans.begin()+count);
    return ans;
}
