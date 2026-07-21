//<-----Sum of squares------->
//[Naive Approach],Iterative - O(n) TC and O(1) SC

class Solution {
  public:
    int sumOfSquares(int n) {
      int sq=0;
       for(int i=1;i<=n;i++){
           sq+=(i*i);
       }
       
       return sq;
    }
};


// [Expected Approach]- Using Mathematical Formulae - O(1) Time and O(1) Space
class Solution {
  public:
    int sumOfSquares(int n) {
       return n*((n+1)*(2*n+1))/6;
    }
};


// [Efficient Approach],Formula 
//  In the above method, sometimes due to large value of n, the value of (n * (n + 1) * (2 * n + 1)) would overflow. We can avoid this overflow up to some extent using the fact that n*(n+1) must be divisible by 2 and restructuring the formula as (n * (n + 1) / 2) * (2 * n + 1) / 3;
class Solution {
  public:
    int sumOfSquares(int n) {
       return ( n*(n+1)/2)*(2*n+1)/3;
    }
};


