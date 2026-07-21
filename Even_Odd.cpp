//<----------Check Even or odd -------------->
//--Naive Approach :    O(1) time complexity and O(1) space complexity
class Solution {
  public:
    bool isEven(int n) {
       if(n%2==0){
           return true;
       }
       else
           return false;
    }
};


// --[Efficient Approach] Using Bitwise AND Operator - O(1) Time and O(1) Space

class Solution {
  public:
    bool isEven(int n) {
       if((n&1)==0){
           return true;
       }
       else
           return false;
    }
};