//<--------Recurring Sequence in Fraction --------->
// Time Complexity : O(N) 
// Auxiliary Space : O(N) 

class Solution {
  public:
    string calculateFraction(int a, int b) {
       string res ;
       
       int rem=a%b;
       map<int,int>mp;
       mp.clear();
       
       while((rem!=0) && (mp.find(rem) == mp.end())){
           mp[rem]=res.length();
           rem=rem*10;
           
           int res_part=rem/b;
           res+=to_string(res_part);
           rem=rem%b;
       }
       
       return (rem==0) ? "" : res.substr(mp[rem]);
    }
};
