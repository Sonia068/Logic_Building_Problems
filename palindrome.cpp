//<---------Palindrome Number ----------->
// [Expected Approach] - By Reversing The Number : Time Complexity : O(log(n)) , Auxiliary space: O(1)

class Solution {
  public:
    bool isPalindrome(int n) {
        int reverse=0;
        
        int temp=abs(n);
        
        while(temp!=0){
            reverse=(reverse*10)+(temp%10);
            temp=temp/10;
        }
        
        return(reverse==abs(n));
        }
    
};


// [Alternate Approach] - Using Number as String  : Time Complexity : O(d) , where d = log₁₀(n) Auxiliary space: O(d) , where d = log₁₀(n)
class Solution {
  public:
    bool isPalindrome(int n) {
       string s=to_string(abs(n));
       int len=s.length();
       
       for(int i=0;i<len/2;i++){
           if(s[i]!=s[len-i-1]){
               return false;
           }
       }
       return true;
    }
    
};
