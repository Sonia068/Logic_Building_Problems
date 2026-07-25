//<----------Reverse digits of a number--------->
//[Naive Approach] Using digit Extraction  : Time Complexity: O(log n) and Space Complexity: O(1)
class Solution {
  public:
    int reverseDigits(int n) {
        int revNum=0;
        while(n>0){
            revNum=revNum*10+n%10;
            n=n/10;
        }
        return revNum;
    }
};

// Using String 1   : Time Complexity: O(log n) and Space Complexity: O(log n)
class Solution {
  public:
    int reverseDigits(int n) {
        int revNum=0;
        while(n>0){
            revNum=revNum*10+n%10;
            n=n/10;
        }
        return revNum;
    }
};

//Using String and Slicing in Python

def reversDigits(n):

    # converting number to string
    s = str(n)

    # reversing the string
    s = s[::-1]

    # converting string to integer
    n = int(s)

    # returning integer
    return n

if __name__ == "__main__":

    n = 4562
    print(reversDigits(n))

    