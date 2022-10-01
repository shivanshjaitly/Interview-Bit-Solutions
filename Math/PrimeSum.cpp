vector<int> Solution::primesum(int A) {
    vector<bool> sieve(A,true);
    for(int i=2;i<sqrt(A);i++){
        for(int j=2;i*j<A;j++)
            sieve[i*j]=false;
    }
    for(int i=2;i<A;i++){
        if(sieve[i] && sieve[A-i])
            return {i,A-i};
    }
}
