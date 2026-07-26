//<------------Cube Count ------------->
//[Naive Approach] Using Nested Loops - O(n^2) time and O(1) space

class Solution {
  public:
    int pairCubeCount(int n) {
        int count=0;
        for(int a=1;a<=n;a++){
            for(int b=0;b<=n;b++){
                if(a*a*a + b*b*b==n){
                    count++;
                }
            }
        }
        return count;
    }
};


//[Expected Approach] Finding different pairs - O(n1/3) time and O(1) space
class Solution {
  public:
    int pairCubeCount(int n) {
        int count = 0;
        for(int i=1;i<=cbrt(n);i++){    // for(int i=1;i*i*i<=n;i++){
            int cb=i*i*i;
            
            int diff=n-cb;
            int cbrtDiff=cbrt(diff);
            
            if(cbrtDiff*cbrtDiff*cbrtDiff==diff){
                count++;
            }
        }
            
            return count++;
        }
        
};
