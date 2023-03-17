#include<stdio.h>
int main()
{
    int n,temp,sum=0;
    printf("Enter a digit: ");
    scanf("%d",&n);
    while(n!=0)
    {
        temp= n%10;
        sum = sum + temp;
        n=n/10;

    }
    printf("Sum of digits of %d\n",sum);
    return 0;
}
