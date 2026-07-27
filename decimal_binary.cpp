//<-------------Decimal to binary ----------------------->
// [Approach - 1] Division by 2 - O(log₂(n)) Time and O(log₂(n)) Space
class Solution {
  public:
    string decToBinary(int n) {
        string bin=" ";
        
        while(n>0){
            int bit=n%2;
            bin.push_back('0'+bit);
            n=n/2;
        }
        
        reverse(bin.begin(),bin.end());
        
        return bin;
    }
};


// [Approach - 2] Using Head Recursion - O(log₂(n)) Time and O(log₂(n)) Space

class Solution {
  public:
  
  void decToBinaryRec(int n,string &bin) {
      if(n==0){
          return ;
      }
      
      decToBinaryRec(n/2,bin) ;
      
      bin.push_back(n%2+'0');
      
  }
  
  
    string decToBinary(int n) {
        string bin=" ";
        
        decToBinaryRec( n,bin);
        return bin;
    }
};


// [Approach - 3] Using Bitwise Operators - O(log₂(n)) Time and O(log₂(n)) Space

class Solution {
  public:
  
    string decToBinary(int n) {
        
        string bin=" ";
        
        while(n>0){
        int bit=n&1;
        bin.push_back('0'+bit);
        n=n>>1;
        }
        
        reverse(bin.begin(),bin.end());
        return bin;
    }
};


//[Approach - 4] Using Built-in Methods - O(log₂(n)) Time and O(log₂(n)) Space
class Solution {
  public:
  
    string decToBinary(int n) {
        
      int len =int(log2(n));
      
      return bitset<64>(n).to_string().substr(64-len-1);
      
    }
};


