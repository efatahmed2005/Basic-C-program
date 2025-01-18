#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    scanf("%d", &number);
    if (number < 2)
    {
        printf("Not prime.\n");
        return 0;
    }
    int j = sqrt(number);

    for (int i = 2; i <= j; i++)
    {

        if (number % i == 0)
        {
            printf("Not prime\n");
            printf("Because it is divisible by %d ",i);
            return 0;
        }
    }
    printf("Prime.\n");
    return 0;
}