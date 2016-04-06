/*Exercise number 02 from https://projecteuler.net/archives
Each new term in the Fibonacci sequence is generated by adding the previous
two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed
four million, find the sum of the even-valued terms.*/
#include <iostream>

using namespace std;
long END = 4000000;
long addition = 0;
long number = 0;
int fibonaci(int i) {
   if(i == 0) {
      return 0;
   }
   if(i == 1) {
      return 1;
   }
   return fibonaci(i-1) + fibonaci(i-2);
}

int  main() {
    int i = 0;
    while(number < END){
        number = fibonaci(i);
        if ((number%2 == 0) and (number < END) )
            addition += number;
        i++;
    }
    cout << addition << endl;
    return 0;
}