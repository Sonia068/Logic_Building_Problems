//<-----Sum of n natural numbers------->
//[Naive Approach],Iterative - O(n) TC and O(1) SC

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum=0;

    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum;

    return 0;
}

//[Alternative  Approach],Recursive - O(n) TC and O(n) SC
#include <iostream>
using namespace std;

int findSum(int nn) {
    if (nn <= 0)
        return 0;

    return nn + findSum(nn - 1);
}

int main() {
    int n;
    cin >> n;
    cout<<findSum(n);
    return 0;
}


// [Efficient Approach],Formula - O(1) TC and O(1) SC
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n * (n + 1)) / 2;
    return 0;
}
