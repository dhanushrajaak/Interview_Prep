// Pattern 1
// Print a square of '*' of size N.

// Example (N = 5)
// *****
// *****
// *****
// *****
// *****

#include<stdio.h>
int main()
{
    for(int i =1;i<=5;i++)
    {
        for(int j =1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}