/*
Problem 6 : Sum Square Difference
The sum of the squares of the first ten natural numbers is,
1² + 2² + .... + 10² = 385
The square of the sum of the first ten natural numbers is,
(1+2+....+10)² = 55² = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025-385=2640. 
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
Answer: 25164150
*/

#include<stdio.h>
int main() {
    int a,n1=0,n2=0,i=0;
    for (i=1;i<=100;i++) {
        n1+=i*i;
    }
    for (i=1;i<=100;i++) {
        n2+=i;       
    }
    n2*=n2;
    printf("Difference between the sum of the square of the first 100 natural number and the square of the sum is %d",n2-n1);
    return 0;
}