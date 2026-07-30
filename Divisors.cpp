//<-----------------3divisors--------->

// [Naive Approach] Divisor Count Check - O(q × n × √n) Time and O(1) Space   -> O(q × n × √n) → for each query, process n elements, and each element takes √n time.
class Solution {
  public:
  
  int divisorCount(int num){
      int count=0;
      
      for(int i=1;i<=num;i++){
          if(num%i==0){
              count++;
          }
      }
      return count;
  }
  
  
    vector<int> threeDivisors(vector<int>& query) {
        vector<int>result;
        
        for(int n:query){
          int total=0;
          
            for(int num=1;num<=n;num++){
              if(divisorCount(num)==3){
                 total++;
          }
         }
              result.push_back(total);
        }
              
              return result;
          }
};



// [Better Approach] Prime Square Property - O(q × √n × √√n) Time and O(1) Space

class Solution {
  public:
    
    bool isPrime(int num){
        if(num<2){
            return false;
    }
    
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                return false;
            }
        }
  
       return true;
    }
    
    
    vector<int> threeDivisors(vector<int>& query) {
        vector<int>result;
        
        for(int n:query){
          int total=0;
          
            for(int root=2;root*root<=n;root++){
              if(isPrime(root)){
                 total++;
          }
         }
              result.push_back(total);
        }
              
              return result;
          }
};


// [Expected Approach] Sieve with Prefix Count - O(√M log log √M + q) Time and O(√M) Space

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> threeDivisors(vector<int>& queries) {

    // Find maximum query value
    int maxQuery = 0;

    for (int x : queries) {
        maxQuery = max(maxQuery, x);
    }

    // We only need primes up to sqrt(maxQuery)
    int limit = sqrt(maxQuery);

    // Sieve of Eratosthenes
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= limit; i++) {

        if (isPrime[i]) {

            // Mark multiples as non-prime
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // prefixPrime[i] = number of primes <= i
    vector<int> prefixPrime(limit + 1, 0);

    for (int i = 1; i <= limit; i++) {
        prefixPrime[i] = prefixPrime[i - 1] + (isPrime[i] ? 1 : 0);
    }

    vector<int> ans;

    for (int n : queries) {

        // Numbers having exactly 3 divisors
        // = prime squares <= n
        int root = sqrt(n);

        ans.push_back(prefixPrime[root]);
    }

    return ans;
}

int main() {

    vector<int> queries = {6, 10, 100};

    vector<int> ans = threeDivisors(queries);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}



