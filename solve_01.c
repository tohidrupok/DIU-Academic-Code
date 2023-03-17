#include<stdio.h>
int main()
{
    int digit,year,month,days,temp;
    scanf("%d",&digit);
    year = digit/365;
    temp = digit%365;
    month = temp/30;
    days = temp%30;

    printf("%d Year %d Month %d Days.",year,month,days);

    return 0;
}
