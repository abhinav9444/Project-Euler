/*
Problem 5 : Smallest Multiple
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?
Answer: 232792560
*/

#include <stdio.h>
int main()
{
    int d=2;   //Initialising Array
    int x=2;
    while(d!=20)
    {
        if(x%d==0)
        {
            d++;
        }
        if(x%d!=0)
        {
            d=2; 
            x++;
        }
    }
    printf("%d",x);
    return 0;
}