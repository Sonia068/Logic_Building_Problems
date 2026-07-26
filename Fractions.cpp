//<-------------------Fractions-------------->
// Time Complexity : O(log(min(a, b))  & Auxiliary Space : O(1)
int gcd(int a,int b){
    return b==0 ? a : gcd(b,a%b);
}
void addFraction(int num1, int den1, int num2, int den2) {
    
    int d=gcd(den1,den2);
    d=(den1*den2)/d;
    
    int n=(num1)*(d/den1)+(num2)*(d/den2);
    
    int common_factor=gcd(n,d);
    
    d=d/common_factor;
    n=n/common_factor;

    cout << n << "/" << d << endl;
    
}
