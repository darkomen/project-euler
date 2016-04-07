/*Exercise number 02 from https://projecteuler.net/archives
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

While I was searching information about prime factor of a number, I found this article:
http://mathworld.wolfram.com/RoughNumber.html
In this way, when I'm looking for a largest prime factor, I know that the max prime factor
is the root square of the number. This is the upper limit in the for loop.
*/

#include <iostream>
#include <math.h>
using namespace std;
bool checkPrime(long long number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number%2 == 0) return false;
    for(unsigned long long i= 3; sqrt(number)>=i; i+=2){
        if(number % i == 0) return false;
    }
    return true;
}

int  main() {
    unsigned long long number = 0;
    unsigned long long max = 0;
    cout << "Insert a number to calculate the largest factor prime: \t";
    cin >> number;
    for(long long i = 1; sqrt(number)>=i; i++){
        if(number % i == 0 && checkPrime(i)){
            max = i;
            cout<< max << endl;
        }
    }
    return 0;
}
