//<-----------Divisibility by 11------------->
// [Naive Approach]: Modulo Division Method : Time Complexity: O(n), where n is length of s. Auxiliary Space: O(1)
class Solution {
  public:
    bool divisibleBy11(string &s) {
        long long  n=stoll(s);    // also use int 
        return n%11==0;
    }
};


// [Expected Approach] - Even-Odd Digit Sum for Large String Input :Time Complexity: O(n), where n is length of s. Auxiliary Space: O(1)
class Solution {
  public:
    bool divisibleBy11(string &s) {
       int n=s.length();
       int evenDigSum=0,OddDigSum=0;
       
       for(int i=0;i<n;i++){
           if(i%2==0){
               OddDigSum+=(s[i]-'0');
           }
           else{
               evenDigSum+=(s[i]-'0');
           }
       }
       
       return((OddDigSum-evenDigSum)%11==0);
    }
};

