//<-----------Kth digit-------------> from right
// // Time Complexity: O(b) or (O(n)) (depends on exponent) (if take variable, then call power and also take long long ,it becomes O(log b)),Auxiliary Space: O(log b)

class Solution {
  public:
  
  long long  power(int a,int b){
      if(b==0){
          return 1;
      }
      
      if(b%2==0){
          return power(a,b/2)*power(a,b/2);
      }
      else{
          return a*power(a,b/2)*power(a,b/2);
      }
  }
  
  
    int kthDigit(int a, int b, int k) {
        
        long long  order=power(a,b);
        long long num=order;
        long long newnum=0;
        
        for(int i=0;i<k;i++){
            num=num%10;
            order=order/10;
            newnum=num;
            num=order;
        }
        
        return newnum;
            
        }
        
};



//      or 

#include <bits/stdc++.h>
using namespace std;

// Modular exponentiation to compute (a^b) % (10^k)
int kthDigit(int a, int b, int k){
    
    long long mod = pow(10LL, k); 
    long long res = 1;
    long long base = a;

    while (b > 0) {
        if (b & 1) {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        b >>= 1;
    }
    
    for (int i = 1; i < k; i++)
            res /= 10;

    return (int)(res);
}

// Driver code
int main(){
    
    int a = 5, b = 2;
    int k = 1;
    cout << kthDigit(a, b, k); 
    return 0;
}



// Time Complexity: O(log b) ,Auxiliary Space: O(1)
