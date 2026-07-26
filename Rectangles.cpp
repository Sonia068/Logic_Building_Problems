//<------------Overlapping Rectangles------------->
class Solution {
  public:
    int doOverlap(vector<int> L1, vector<int> R1, vector<int> L2, vector<int> R2) {
         if((L1[0]>R2[0]) || (L2[0]>R1[0])){
             return 0;
         }
         
         if((R1[1]>L2[1]) || (R2[1]>L1[1])){
             return 0;
         }
         
         return 1;
    }
};