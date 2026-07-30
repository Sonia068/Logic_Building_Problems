//<-----------Divisibility by 13------------->
// [Naive Approach] Modulo Division : Time Complexity: O(n), n is length of s Auxiliary Space: O(1)
class Solution {
  public:
    bool divby13(string &s) {
        long long n=stoll(s);
        
        return n%13==0;
    }
};


// [Expected Approach 1] Alternating Sum of 3-Digit Blocks : Time Complexity: O(n), n is length of s Auxiliary Space: O(1)


class Solution {
  public:
    bool divby13(string &s) {
     
      int len=s.length();
      
      if(len==1 && s[0]=='0'){
          return true;
      }
      
      if(len%3==1){
          s+="00";
          len+=2;
      }
      
      else if(len%3==2){
          s+="0";
          len+=1;
      }
      
      int sum=0;
      int p=1;
      
      for(int i=len-1;i>=0;i--){
          int group=0;
          group+=(s[i--]-'0');
          group+=(s[i--]-'0')*10;
          group+=(s[i]-'0')*100;
          
          sum=sum+group*p;
          
          p*=-1;
      }
      
      sum=abs(sum);
      
      return (sum%13==0);
    }
};


// [Expected Approach 2] String-Based Modulo  : Time Complexity: O(n), n is length of s Auxiliary Space: O(1)

class Solution {
  public:
    bool divby13(string &s) {
      int rem=0;
      
      for(char ch:s){
          rem=(rem*10+(ch-'0'))%13;
      }
      
      return rem==0;
    }
};