//<--------------LCM-------------------->
// [Naive Approach] Using Conditional Loop : Time Complexity: O(min(a,b)) & Auxiliary Space: O(1)

class Solution {
  public:
    int lcm(int a, int b) {
       int g=max(a,b);
       int s=min(a,b);
       
       for(int i=g;i<=a*b;i+=g){
           if(i%s==0){
               return i;
           }
       }
        
    }
};

// [Expected Approach] Using GCD LCM Formula  : Time Complexity: O(log(min(a,b)) & Auxiliary Space: O(log(min(a,b)
class Solution {
  public:
   int gcd(int a,int b){
       return (b==0)? a:gcd(b,a%b);
   }
   
    int lcm(int a, int b) {
       return (a/gcd(a,b))*b;                //  return ((a*b)/(gcd(a,b)));
    }

};



