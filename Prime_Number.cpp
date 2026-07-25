//<---------Prime Number--------->
// [Naive Approach] Basic Trial Division - O(n) Time and O(1) Space
class Solution {
  public:
    bool isPrime(int n) {
        if(n<=1){
            return false;
        }
        
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        
        return true;

}
}

// [Better Approach] Square Root Trial Division - O(sqrt(n)) Time and O(1) Space
class Solution {
  public:
    bool isPrime(int n) {
       if(n<=1){
           return false;
       }
       
       for(int i=2;i*i<=n;i++){    //  for(int i=2;i<=sqrt(n);i++){
           if(n%i==0){
               return false;
           }
       }
       return true;
    }
};



//[Expected Approach] Optimized Square Root Trial Division - O(√n) Time and O(1) Space
class Solution {
  public:
    bool isPrime(int n) {
       if(n<=1){
           return false;
       }
       
       if(n==2 || n==3){
           return true;
       }
       
       if(n%2==0 || n%3==0){
           return false;
       }
       
       
       for(int i=5;i*i<=n;i=i+6){
           if(n%i==0  || n%(i+2)==0){
               return false;
           }
       }
       return true;
    }
};


