//<--------------Swap Numbers -------->
// Using a third variable 
#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b;
    cin>>a>>b;
    swapNumbers(a,b);
    cout<<"After swapping: a="<<a<<", b="<<b;
    return 0;
}


// Without using a third variable
void swapNumbersNoTemp(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}


// Without a Third Variable – Using Bitwise XOR
void swapNumbersXOR(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

// Using built in swap function:
void swapNumbersBuiltIn(int &a, int &b) {
    swap(a, b);
}       