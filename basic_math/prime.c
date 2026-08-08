#include <stdio.h>

int main()
{
    int n, counter = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Not prime");
        return 0;
    }

    for (int i = 1; i <= n / i; i++)
    {
        if (n % i == 0)
        {
            counter++;
        }
    }

    if (counter == 1)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}