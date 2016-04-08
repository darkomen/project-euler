/*Exercise number 04 from https://projecteuler.net/archives
A palindromic number reads the same both ways. The largest palindrome made from
the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
long largest = 0;
long sample = 0;

bool isPalindromic(long long number){
    char _number[] = "";
    int contador = 0;
    sprintf(_number,"%lld",number);
    while(_number[contador] != '\0'){
        contador++;
    }
    int j = contador - 1;
    for(int i=0;i<=j;i++){
        if (_number[i] != _number[j])return false;
        j--;
    }
    return true;
}

int  main() {
    for(int i = 100;i<=999;i++){
        for(int j = 100;j<=999;j++){
            sample = i*j;
            if (isPalindromic(sample)){
                if (sample > largest) largest = sample;
            }
        }
    }
    cout << largest <<endl;
    return 0;
}
