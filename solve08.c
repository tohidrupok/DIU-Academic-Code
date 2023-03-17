#include <stdio.h>

int main(void)
{

    int i, num, sum = 0;

    printf("Enter a number\n");
    scanf(" %i", &num);

    for(i = 1; i <= num/2; i++)
    {
        if(num % i == 0)
            sum += i;
    }
    if(sum == num)
        printf("%d is a perfect number\n", num);
    else
        printf("Not a perfect number\n");
    return 0;
}
