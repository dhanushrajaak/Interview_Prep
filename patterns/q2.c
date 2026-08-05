// Pattern 2
// Print a right-angled triangle of '*'.

// *
// **
// ***
// ****
// *****

#include<stdio.h>
#define max 5
int main()
{
    for(int i =0;i<max;i++)
    {
        for(int j =0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}