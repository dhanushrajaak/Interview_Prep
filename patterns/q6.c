// Pattern 6
// Print inverted number triangle.

// 12345
// 1234
// 123
// 12
// 1
#include<stdio.h>
#define max 5
int main()
{
    for(int i =0;i<=max;i++)
    {
        for(int j =1;j<=max-i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}