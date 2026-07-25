//<-------- Closest Number  ------>
//[Naive approach] Time Complexity: O(n) and Space Complexity: O(1)
class Solution {
  public:
    int closestNumber(int n, int m) {
        int closest=0;
        int minDifference=INT_MAX;
        
        for(int i=n-abs(m);i<=n+abs(m);i++){
            if(i%m==0){
            int difference=abs(n-i);
              if(difference<minDifference ||  (difference==minDifference && abs(i)>abs(closest))){
              closest=i;
              minDifference=difference;
        }
            }
        }
        
        return closest ;
    }
};



//[Optimized approach] Time Complexity: O(1) and Space Complexity: O(1)

class Solution {
  public:
    int closestNumber(int n, int m) {
       int q=n/m;
       int n1=m*q;
       
       int n2=(n*m>0)? (m*(q+1)) : (m*(q-1));
       
       if(abs(n-n1) < abs(n-n2)){
           return n1;
       }
       
       return n2;
    }
       
};