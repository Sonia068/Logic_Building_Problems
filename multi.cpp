//<--------Mutiplication table ---------->

//Iterative Approach - TC: O(10) = O(1) and SC: O(1)
#include <iostream>
using namespace std;

void printTable(int n){
  for(int i =1;i<=10;i++){
    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
  }

}

int main(){
    int n;
    cout<<"Enter the number to print the table: ";
    cin>>n;

    printTable(n);

    return 0;
}



//Recursive Approach - TC-0(11)= O(1) and SC: O(11) = O(1)  
#include <iostream>
using namespace std;


void printTable(int n, int i = 1)
{
    if (i == 11)
        return;
    cout << n << " * " << i << " = " << n * i << endl;
    i++;
    printTable(n, i);
}

int main()
{
    int n = 5;
    printTable(n);
}
