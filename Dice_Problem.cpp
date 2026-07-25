//<------Dice Problem ------>
//[Naive Approach] Time Complexity: O(1) and Space Complexity: O(1)
class Solution {
  public:
    int oppositeFaceOfDice(int n) {
        int ans;
        if(n==1){
            ans=6;
        }
        else if(n==2){
            ans=5;
        }
        
          else if(n==3){
            ans=4;
        }
        
        
          else if(n==4){
            ans=3;
        }
        
        
           else if(n==5){
            ans=2;
        }
        
           else {
            ans=1;
        }
        
        return ans ;
    }
};

//[Expected Approach] Using Sum of Two Sides : TC : O(1) and SC: O(1)

class Solution {
  public:
    int oppositeFaceOfDice(int n) {
       int ans=7-n;
       return ans;
    }
};


