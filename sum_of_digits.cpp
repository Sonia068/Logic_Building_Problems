//<------Sum of digits ---->
//[Naive Approach] Using digit Extraction  : Time Complexity: O(log n) and Space Complexity: O(1)
class Solution {
  public:
    int sumOfDigits(int n) {
        int num=10;
        int sum=0;
        
        while(n>0){
          sum+=n%10;
          n=n/10;
        }
        
        return sum;
    }
};


//Using Recursion - O(logn) Time and O(logn) Space 
class Solution {
  public:
    int sumOfDigits(int n) {
       if(n==0){
           return 0;
       }
       
        return (n % 10)+sumOfDigits(n/10);
    }
};


//[Optimized Approach] Using String Conversion: Time Complexity: O(1) and Space Complexity: O(1)
class Solution {
  public:
    int sumOfDigits(int n) {
       string s=to_string(n);
       int sum = 0;
       for(char ch : s){
           sum+=ch-'0';
       }
       
       return sum;
    }
       
};


