//<------------Square root ------------->
// [Naive Approach] Using a loop - O(sqrt(n)) Time and O(1) Space

class Solution {
  public:
    int floorSqrt(int n) {
        int result=1;
        while(result*result<=n){     //    while(result<=sqrt(n)){
            result++;
        }
        
        return result-1;
        
    }
};


// [Expected Approach] Using Binary Search - O(log(n)) Time and O(1) Space

class Solution {
  public:
    int floorSqrt(int n) {
        int result=1;
        int lo=1;
        int high=n;
        
        while(lo<=high){
            int mid=lo+(high-lo)/2;  //   int mid=(lo+(high-lo))/2;
            
            if(mid*mid<=n){
                result=mid;
                lo=mid+1;
            }
            else{
              high=mid-1;
        }
        }
    
    return result;
    }
};


//[Alternate Approach] Using Built In functions - O(log(n)) Time and O(1) Space

class Solution {
  public:
    int floorSqrt(int n) {
       int res=sqrt(n);
       return res;
    }
};


// [Alternate Approach] Using Formula Used by Pocket Calculators - O(1) Time and O(1) Space
class Solution {
  public:
    int floorSqrt(int n) {
      int result=exp(0.5*log(n));
      
      if((result+1)*(result+1)<=n){
          result++;
      }
        return result;
        
    }
    };

    
