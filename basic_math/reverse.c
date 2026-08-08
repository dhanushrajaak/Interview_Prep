// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
// Example 1
// Input: n = 25
// Output: 52
// Explanation: Reverse of 25 is 52.

// Example 2
// Input: n = 123
// Output: 321
// Explanation: Reverse of 123 is 321.
#include<stdio.h>
int main()
{
    int n,ld,sum=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        ld=n%10;
        sum=sum*10+ld;
        n=n/10;

    }
    printf("%d",sum);
}
