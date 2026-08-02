//<----------Combination ---------->
// [Naive Approach] Using Recursion - O(2^n) Time and O(n) Space
class Solution {
  public:
    int nCr(int n, int r) {
        if(r>n){
            return 0;
        }
        
        if(r==0 || r==n){
            return 1 ;
        }
        
        return nCr(n-1,r-1)+nCr(n-1,r);
        
    }
};


// [Better Approach - 1] Using Factorial - O(n) Time and O(1) Space

class Solution {
  public:
  int fact(int n){
      int res=1;
      
      for(int i=2;i<=n;i++){
          res*=i;
      }
      return res;
  }
  
  
    int nCr(int n, int r) {
        if(r>n){
            return 0;
        }
        
        return fact(n)/(fact(r)*fact(n-r));
    }
    
    
};


// [Better Approach - 2] Avoiding Factorial Computations - O(n) Time and O(1) Space

// To optimize, we compute the product of numbers from r+1 to n and divide it by the product of numbers from 1 to (n-r).
class Solution {
  public:
  double Multiplier(int start,int end){
      if(start==end){
          return start;
      }
      
      double res=1;
      
      while(start<=end){
          res*=start;
          start++;
      }
      return res;
  }
  
  int nCr(int n,int r){
      if(r>n){
          return 0;
      }
      
      if(n==r || r==0){
          return 1;
      }
      
      int max_val=max(r,n-r);
      int min_val=min(r,n-r);
      
      double num=Multiplier(max_val+1,n);
      double den=Multiplier(1,min_val);
      
      return int(num/den);
  }
    
    
};


// [Expected Approach] By using Binomial Coefficient formula - O(r) Time and O(1) Space
class Solution {
  public:
  int nCr(int n,int r){
     double sum=1;
     
     for(int i=1;i<=r;i++){
         sum=sum*(n-r+i)/i;
     }
     
     return int(sum);
  }
  
};


// [Alternate Approach] Using Logarithmic Formula - O(r) Time and O(1)

class Solution {
  public:
  int nCr(int n,int r){
       if (r > n) return 0;  
    if (r == 0 || n == r) return 1;    
    
    double res=0;
    
    for(int i=0;i<r;i++){
        res+=log(n-i)-log(i+1);
    }
    
    return (int)round(exp(res));
  }
  
};


