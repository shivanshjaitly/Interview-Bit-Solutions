// A = [0, 1, 1]
// B = [0, 1, 2]
// Ans=2

int coverPoints(vector<int> &A, vector<int> &B) {
    int steps=0;
    for(int i=1;i<A.size();i++){
        int a=abs(A[i]-A[i-1]);
        int b=abs(B[i]-B[i-1]);
        steps+=max(a,b);
    }
    return steps;
}
