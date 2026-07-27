//<---------Fibonacci--------->
// [Naive Approach] Using Recursion 
// Time Complexity: O(2^n), because each state requires answers from previous two states, and thus calls the function for both of those states recursively.
// Auxiliary Space: O(n), due to recursion stack

class Solution {
  public:
    int nthFibonacci(int n) {
        if(n<=1){
            return n;
        }
        
        return nthFibonacci(n-1)+nthFibonacci(n-2) ;
    }
};


// [Expected Approach-1] Memoization Approach : Time Complexity: O(n), Auxiliary Space: O(n),

class Solution {
  public:
  
  
    int nthFibonacciutil(int n,vector<int>&dp){
        if(n<=1){
            return n;
        }
        
        if(dp[n]!=-1){
            return dp[n];
        }
        
        
        dp[n]=nthFibonacciutil(n-1,dp)+nthFibonacciutil( n-2,dp);
        
        return dp[n];
    }
    
    
    int nthFibonacci(int n) {
     vector<int>dp(n+1,-1);
     
     return nthFibonacciutil(n,dp);
    }

};


// [Expected Approach-2] Bottom-Up Approach : Time Complexity: O(n),Auxiliary Space: O(n)
class Solution {
  public:
 
    int nthFibonacci(int n) {
       vector<int>dp(n+1);
       dp[0]=0;dp[1]=1;
       
       for(int i=2;i<=n;i++){
           dp[i]=dp[i-1]+dp[i-2];
       }
    return dp[n];
    }
};


// [Expected Approach-3] Bottom Up Space Optimized Approach - O(n) Time and O(1) Space
class Solution {
  public:
 
    int nthFibonacci(int n) {
      if(n<=1){
          return n;
      }
      
      int curr=0;
      int prev2=0;
      int prev1=1;
      
      for(int i=2;i<=n;i++){
          curr=prev1+prev2;
          prev2=prev1;
          prev1=curr;
      }
      
      return curr;
    }
};


// Using Matrix Exponentiation - O(log(n)) time and O(log(n)) space

//Driver Code Starts
#include <vector>
#include <iostream>
using namespace std;

//Driver Code Ends
void multiply(vector<vector<int>>& mat1,
                                vector<vector<int>>& mat2) {
    int x = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
    int y = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
    int z = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
    int w = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];

    // Update matrix mat1 with the result
    mat1[0][0] = x;
    mat1[0][1] = y;
    mat1[1][0] = z;
    mat1[1][1] = w;
}

void matrixPower(vector<vector<int>>& mat1, int n) {
    // Base case for recursion
    if (n == 0 || n == 1) return;

    vector<vector<int>> mat2 = {{1, 1}, {1, 0}};

    matrixPower(mat1, n / 2);

    multiply(mat1, mat1);

    // If n is odd, multiply by the helper matrix mat2
    if (n % 2 != 0) {
        multiply(mat1, mat2);
    }
}

int nthFibonacci(int n) {
    if (n <= 1) return n;

    // Initialize the transformation matrix
    vector<vector<int>> mat1 = {{1, 1}, {1, 0}};

    matrixPower(mat1, n - 1);

    // The result is in the top-left cell of the matrix
    return mat1[0][0];
}














