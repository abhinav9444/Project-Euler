/*
Problem 7 : 10001st Prime
By listing the first six prime numbers: 2,3,5,7,11 and 13, we can see that the 6th prime is 13.
What is the 10001st prime number?
Answer: 104743
*/

#include <stdio.h>

int main() {
    int i, a = 2, count = 0;
    
    while (count < 10001) {
        int is_prime = 1;
        
        for (i = 2; i < a; i++) {
            if (a % i == 0) {
                is_prime = 0;
                break;
            }
        }
        
        if (is_prime) {
            count++;
        }
        
        a++;
    }
    
    printf("10001st prime number: %d\n", --a);
    
    return 0;
}
