// A = [3, 30, 34, 5, 9]
// ans = "9534330"

static bool comp(string a,string b){
    return a+b>b+a;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<string> arr;
    for(int i=0;i<A.size();i++)
        arr.push_back(to_string(A[i]));
    sort(arr.begin(),arr.end(),comp);
    string ans="";
    for(int i=0;i<arr.size();i++)
        ans+=arr[i];
    int i=0;
    while(ans[i]=='0' && i+1<ans.size())
        i++;
    return ans.substr(i);
}
