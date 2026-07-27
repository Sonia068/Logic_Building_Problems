//<----------Nth term ----------->
// [Naive approach] Using Loop - O(n) time and O(1) space
#include <iostream>
using namespace std;

// Function to find the nth term of series
int term(int n)
{      
    // Loop to add numbers
    int ans = 0;
    for (int i = 1; i <= n; i++)    
        ans += i; 
    
    return ans;
}

int main()
{
    int n = 4;
    cout << term(n) ;
    return 0;
}


//[Expected Approach] Using Formula - O(1) time and O(1) space

#include <bits/stdc++.h>
using namespace std;

// Function to find nth term
int term(int n)
{
    return n * (n + 1) / 2;
}


int main()
{
    int n = 4;
    cout << term(n);
    return 0;
}

