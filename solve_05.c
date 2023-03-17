#include<stdio.h>
int main()
{
    int n,i,j,Count=1;
    printf("Please Enter:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",Count);
            Count++;
        }
        printf("\n");
    }
    return 0;
}
