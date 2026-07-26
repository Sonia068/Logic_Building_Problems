//<-------------GCD or HCF --------------->
//[Approach - 1] Using Loop - O(min(a, b)) Time and O(1) Space

class Solution {
  public:
    int gcd(int a, int b) {
        if(a==0 || b==0)  return max(a,b);
        int result=min(a,b);
        
        while(result>0){
        if(a%result==0 && b%result==0){
            break;
        }
           result--;
        }
        
        return result;
    }
};


// [Approach - 2] Euclidean Algorithm using Subtraction - O(min(a,b)) Time and O(min(a,b)) Space
class Solution {
  public:
    int gcd(int a, int b) {
        if(a==0){
            return b;
        }
        
        if(b==0){
            return a;
        }
        
        if(a==b){
            return a;
        }
        
        
        if(a>b){
            return gcd(a-b,b);
        }
        
          return gcd(a,b-a);
    }
            
        
};


//[Approach - 3 ] Modified Euclidean Algorithm using Subtraction by Checking Divisibility - O(min(a, b)) Time and O(min(a, b)) Space

class Solution {
  public:
    int gcd(int a, int b) {
        if(a==0){
            return b;
        }
        
        if(b==0){
            return a;
        }
        
        if(a==b){
            return a;
        }
        
        
        if(a>b){
           if(a%b==0)
             return b;
           return gcd(a-b,b);
        }
        
           if(b%a==0)
             return a;
           return gcd(a,b-a);
        }
};



//[Approach - 4] Optimized Euclidean Algorithm by Checking Remainder: Time: O(log(min(a,b))) & Space: O(log(min(a,b))
class Solution {
  public:
    int gcd(int a, int b) {
       return b==0 ? a:gcd(b,a%b);
    }
};


// [Approach - 5] Using Built-in Function - O(log(min(a, b))) Time and O(1) Space
class Solution {
  public:
    int gcd(int a, int b) {
        return __gcd(a,b);
        }
};





