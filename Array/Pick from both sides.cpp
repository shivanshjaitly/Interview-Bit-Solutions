// A = [5, -2, 3 , 1, 2]
// B = 3
// Ans = 8

int solution(vector<int>&A,int B){
  int sum=0,maxi=0,n=A.size();
  for(int i=0;i<B;i++)
    sum+=A[i];
  for(int i=0;i<B;i++){
    sum+=A[n-i-1];
    sum-=A[B-i-1];
    maxi=max(maxi,sum);
  }
  return maxi;
}
