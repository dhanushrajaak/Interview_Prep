// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.
// A palindrome number is a number which reads the same both left to right and right to left.
// Example 1
// Input: n = 121
// Output: true
// Explanation: When read from left to right : 121.
// When read from right to left : 121.

// Example 2
// Input: n = 123
// Output: false
// Explanation: When read from left to right : 123.
// When read from right to left : 321.

#include<stdio.h>
int main()
{
    int n,ls,sum=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    int n_cpy=n;
    while(n>0)
    {
        ls=n%10;
        sum=sum*10+ls;
        n=n/10;
    }
    if(sum==n_cpy)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}