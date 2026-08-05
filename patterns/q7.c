// Pattern 7
// Print a full pyramid.

//     *
//    ***
//   *****
//  *******
// *********
#include<stdio.h>
#define max 5
int main()
{
    for(int i =0;i<max;i++)
    {
        for(int j =1;j<max-i;j++)
        {
            printf(" ");
        }
        
        for(int j =0;j<=i;j++)
        {
            printf("*");
        }
        for(int j =1;j<=i;j++)
        {
            printf("*");
        }
        for(int j =i;j<max-1;j++)
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