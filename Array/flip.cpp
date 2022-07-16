// A = "010"
// ans = [1,1]

// A = "111"
// ans = []

vector<int> flip(string A) {
    int cz=0;
    for(int i=0;i<A.size();i++){
        if(A[i]=='0')
            cz++;
    }
    if(cz==0)
        return {};
    int count=0,maxCount=0,left=-1,right=-1,startInd=0;
    for(int i=0;i<A.size();i++){
        if(A[i]=='0')
            count++;
        if(A[i]=='1')
            count--;
        if(count>maxCount){
            maxCount=count;
            left=startInd;
            right=i;
        }
        if(count<0){
            count=0;
            startInd=i+1;
        }
    }
    return {left+1,right+1};
}
