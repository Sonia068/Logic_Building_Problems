//<-----------------Factorial-------------------------->
//Iterative Solution - O(n) Time and O(1) Space

class Solution {
  public:
    int factorial(int n) {
        int num=1;
        if(n==0){
            return 1;
        }
        for(int i=1;i<=n;i++){
            num*=i;
        }
        
        return num;
        
    }
};



//Recursive Solution - O(n) Time and O(n) Space

class Solution {
  public:
    int factorial(int n) {
       if(n==0  || n==1){
           return 1;
       }
       
       return n*factorial(n-1);
    }
};