// Sum of 7's Multiple

long Solution::solve(int A, int B) {
    long x = A/7;
    if(A%7==0) x--;
    long y = B/7;
    long long sum = y*(y+1)/2 - x*(x+1)/2;
    return sum*7;
}
