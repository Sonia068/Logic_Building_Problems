//<-------------------Perfect Number--------------->
// [Naive Approach] Divisor Sum Method - O(n) Time and O(1) Space

class Solution {
  public:
    bool isPerfect(int n) {
        int sum=0;
        for(int i=1;i<n;i++){
            if(n%i==0){
                sum+=i;
            }
        }
        
        return sum==n;
    }
};

// [Expected Approach] Optimized Divisor Search Method - O(sqrt n) Time and O(1) Space
class Solution {
  public:
    bool isPerfect(int n) {
      int sum=1;
      
      for(int i=2;i*i<=n;i++){
          if(n%i==0){
              if(i*i!=n){
                  sum=sum+i+n/i;
              }
              else{
              sum=sum+i;
          }
      }
      }
      
      if(sum==n && n!=1){
          return true;
      }
      
      return false;
    }
};

