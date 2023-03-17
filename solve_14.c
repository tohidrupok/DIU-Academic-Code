#include<stdio.h>
int main()
{
    int i, first, last, n, search, array[100];

    scanf("%d",&n);

    for ( i = 0 ; i < n ; i++ )
        scanf("%d",&array[i]);
    printf("Enter value to find\n");
    scanf("%d",&search);
    first = 0;
    last = n - 1;

    while( first <= last )
    {
        int  middle = (first+last)/2;
        if ( array[middle] == search )
        {
            printf("%d found at location [%d].\n", search, middle);
            break;
        }
        if ( array[middle] < search )
            first = middle + 1;

        else
            last = middle - 1;

    }
    if ( first > last )
        printf("Not found! %d is not present in the list.\n", search);
    return 0;
}
