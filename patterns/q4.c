// Pattern 4
// Print a right-angled triangle where each row
// contains the row number.

// 1
// 22
// 333
// 4444
// 55555

#include<stdio.h>
#define max 5
int main()
{
    for(int i =1;i<=max;i++)
    {
        for(int j =1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}