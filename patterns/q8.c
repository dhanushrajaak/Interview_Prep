// Pattern 8
// Print an inverted pyramid.

// *********
//  *******
//   *****
//    ***
//     *
#include<stdio.h>
#define max 5
int main()
{
    for(int i =0;i<max;i++)
    {
        for(int j =1;j<=i;j++)
        {
            printf(" ");
        }
        for(int j =0;j<max-i;j++)
        {
            printf("*");
        
        }
        for(int j =1;j<max-i;j++)
        {
            printf("*");
        
        }
        for(int j =1;j<=i;j++)
        {
            printf(" ");
        }
        // for(int j =1;j<=i;j++)
        // {
        //     printf("%d",j);
        // }
        printf("\n");
    }
}