#include<stdio.h>
int calculate_triangle(int a, int b)
{
    int area =(a * b)*0.5;
    return area;
}
int main()
{
    int lombo,dorgo,ans;
    scanf("%d%d",&lombo,&dorgo);
    ans = calculate_triangle(lombo,dorgo);
    printf("area = %d",ans);
    return 0;
}
