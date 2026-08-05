// Pattern 5
// Print an inverted right-angled triangle.

// *****
// ****
// ***
// **
// *

#include<stdio.h>
#define max 5
int main()
{
    for(int i =0;i<max;i++)
    {
        for(int j =0;j<max-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}