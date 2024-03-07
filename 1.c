/*
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 and 9.
The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below.
Answer: 233168
*/

#include<stdio.h>
int main() {
    int i,n,sum3=0,sum5=0,sum15=0,temp=0;
    for(i=1;i<=333;i++) {
        temp+=3*i;
        if(temp%3==0 && temp%15!=0) {
            sum3+=temp;
            temp=0;
        } else {
            temp=0;
        }
    }
    for(i=1;i<200;i++) {
        temp+=5*i;
        if(temp%5==0 && temp%15!=0) {
            sum5+=temp;
            temp=0;
        } else {
            temp=0;
        }
    }
    for(i=1;i<67;i++) {
        temp+=15*i;
        if(temp%15==0) {
            sum15+=temp;
            temp=0;
        } else {
            temp=0;
        }
    }
    printf("Sum of all multiples of 3 and 5 below 1000 is %d ",sum3+sum5+sum15);
    return 0;
}