// A = [3 4 1 4 1]
// ans = 1 or 4

int repeatedNumber(const vector<int> &A) {
    int slow=A[0];
    int fast=A[A[0]];
    while(slow!=fast){
        slow=A[slow];
        fast=A[A[fast]];
    }
    slow=0;
    while(slow!=fast){
        slow=A[slow];
        fast=A[fast];
    }
    return slow;
}
