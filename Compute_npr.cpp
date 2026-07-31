<----------Permutation---------->
//[Naive Approach] Using Factorial Formula - O(n) Time and O(1) Space
class Solution {
  public:
  long long fact(int n){
      long long result=1;
      
      for(int i=2;i<=n;i++){
          result*=i;
      }
      
      return result;
  }
  
  
    long long nPr(int n, int r) {
        if(r>n){
            return 0;
        }
        
        return fact(n)/fact(n-r);
        
    }
};



// [Expected Approach] Multiply the Required Terms Directly - O(r) Time and O(1) Space
class Solution {
  public:
  
    long long nPr(int n, int r) {
        if(r>n){
            return 0;
        }
        
    long long result=1;
      
      for(int i=0;i<r;i++){
          result*=(n-i);
      }
      
      return result;
  }
        
    
};


