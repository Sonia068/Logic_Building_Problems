//<------------Armstrong---------->
// [Approach 1] Naive Approach : Time Complexity: O(d*log(d)), where d is the number of digits in n, Space Complexity: O(1)
class Solution {
  public:
  
  int power(int x,int y){
      if(y==0){
          return 1;
      }
      
      if(y%2==0){
          return power(x,y/2)*power(x,y/2);
      }
      
       return x*power(x,y/2)*power(x,y/2);
  }
  
  int order(int n){
      int count=0;
      
      while(n){
          count++;
          n=n/10;
      }
      
      return count;
  }
  
  
    bool armstrongNumber(int n) {
        int t=order(n);
        int sum=0;
        int temp=n;
        
        while(temp){
            int r=temp%10;
            sum=sum+power(r,t);
            temp=temp/10;
        }
        
        return (sum==n);
    }
};

// [Approach 2] Using Numeric Strings : Time Complexity: O(d*log(d)), where d is the number of digits in n, Space Complexity: O(1)
class Solution {
  public:
    bool armstrongNumber(int n) {
        string number=to_string(n);
        
        int t=number.length();
        int output;
        for(char i:number){
            
            output=output+(int)pow((i-'0'),t);
        }
            
            if(output==stoi(number)){
                return true;
            }
            else
               return false;
        }
      
};