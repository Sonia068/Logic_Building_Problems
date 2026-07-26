//<-----------day of the week for a given date------------->
// [Naive Approach] Day Count Calculation - O(Y + M) Time and O(1) Space
class Solution {
  public:
  
  
    bool isLeapYear(int year){
            return (year%400==0) || (year%4==0 && year%100!=0);
        }
        
        
        
    string getDayOfWeek(vector<int>& date) {
        int day=date[0];
        int month=date[1];
        int year=date[2];
        
        vector<string>weekDays={
            "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"
        };
        
        vector<int>daysInMonth={
            31,28,31,30,31,30,31,31,30,31,30,31
        };
        
        
        long long totalDays=0;
        
        for(int y=1;y<year;y++){
            totalDays+=isLeapYear(y) ? 366 : 365;
        }
        
        
        for(int m=1;m<month;m++){
            if(m==2 && isLeapYear(year)){
                totalDays+=29;
            }
            
            totalDays+=daysInMonth[m-1];
        }
        
         totalDays += day - 1;

         return weekDays[totalDays % 7];
}

};


// [Expected Approach] Zeller's Congruence Formula - O(1) Time and O(1) Space

class Solution {
  public:
  
    string getDayOfWeek(vector<int>& date) {
        int d=date[0];
        int m=date[1];
        int y=date[2];
        
        vector<string>weekDays={
            "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
        };
        
        static  int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
        y-=(m<3) ;
        
        int day=(y+(y/4)-(y/100)+(y/400)+t[m-1]+d)%7;
        
        return weekDays[day];
    }
};



