// Pattern 3
// Print a right-angled triangle using numbers.

// 1
// 12
// 123
// 1234
// 12345

#include<stdio.h>
#define max 5
int main()
{
    for(int i =0;i<=max;i++)
    {
        for(int j =1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}