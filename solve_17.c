#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return factorial(n-1)*n;
    }

}
int main()
{
    int n,ans;
    scanf("%d",&n);
    ans= factorial(n);
    printf("fact = %d",ans);
    return 0;
}
