#include<stdio.h>
int power(int x, int y)
{
        if (y == 0)
            return 1;
        else if (y == 1)
            return x;
        else
            return (x * power(x,y-1));

}

int main()
{
    int b, p, result;
    scanf("%d%d",&b,&p);
    result = power(b,p);
    printf("result = %d",result);
}
