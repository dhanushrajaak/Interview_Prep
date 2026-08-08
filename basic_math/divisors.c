 /*
 Q1. Write a C program to print all divisors of a given number.

 Input:
 Enter a number: 12

 Output:
 Divisors of 12 are: 1 2 3 4 6 12
 */
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(int i =1;i<=n/i;i++)
    {
        if(n%i==0)
        {
            printf("%d\t",i);
        }
        if((n/i)!=i)
        {
            printf("%d\t",n/i);
        }
    }
}