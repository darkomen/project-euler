/*Exercise number 05 from https://projecteuler.net/archives
2520 is the smallest number that can be divided by each of the numbers from 1
to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the
numbers from 1 to 20?
*/

#include <iostream>

using namespace std;
int number = 0;
int i = 1;
int  main() {
    do{
        for(int j = 1;j<=20;j++){
            if (j == 20) number = i;
            if (i%j != 0) j=20;
        }
        i++;
    }while(number==0);
    cout << number <<endl;
    return 0;
}
