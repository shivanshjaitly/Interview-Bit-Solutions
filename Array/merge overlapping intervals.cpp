// [1,3],[2,6],[8,10],[15,18]
// ans = [1,6],[8,10],[15,18]

bool comp(Interval I1,Interval I2){
    return I1.start<I2.start;
}  

vector<Interval> merge(vector<Interval> &A) {
    vector<Interval> ans;
    if(A.size()==0)
        return ans;
    sort(A.begin(),A.end(),comp);
    Interval temp=A[0];
    for(auto it:A){
        if(it.start<=temp.end)
            temp.end=max(temp.end,it.end);
        else{
            ans.push_back(temp);
            temp=it;
        }
    }
    ans.push_back(temp);
    return ans;
}
