//<--------Digital root --------->
//[Naive Approach] Repetitively Adding Digits -  O(d) Time and O(1) Space
class Solution {
  public:
    int digitalRoot(int n) {
        int res=0;
        while(n>0 || res>9){
            if(n==0){
                n=res;
                res=0;
            }
            
            res+=n%10;
            n/=10;
        }
        return res;
    }
};


// [Expected Approach] Using Mathematical Formula - O(1) Time O(1) Space

class Solution {
  public:
    int digitalRoot(int n) {
       if(n==0){
           return 0;
       }
       
       if(n%9==0){
           return 9;
       }
       
       return (n%9);
    }
};

