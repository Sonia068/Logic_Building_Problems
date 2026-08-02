//<-------Fraction to decimal --------->
// TC :(O(n)) SC: O(n)
class Solution {
  public:
    string calculateFraction(int a, int b) {
       if(a==0){
           return "0";
       }
       
       string res=(a<0)^(b<0)?"-":"";
       
       a=abs(a);
       b=abs(b);
       
       res+=to_string(a/b);
       
       int rem =a%b;
       
       if(rem==0){
           return res;
       }
        
        
       res.append(".");
       
       unordered_map<int,int>mp;
       
       while(rem>0){
           if(mp.find(rem)!=mp.end()){
                res.insert(mp[rem],"(");
                res.append(")");
                break;
           }
           
           mp[rem]=res.size();
           
           rem=rem*10;
           
           res+=to_string(rem/b);
           rem=rem%b;
       }
       
       return res;
    }
};