#include <stdio.h>
int main()
{
    int arr[100], search, i, n, first, last, middle;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array(plz,sorted):\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Searching Value: ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;

    while (first <= last)
    {
        middle = (first + last) / 2;
        if (arr[middle] == search)
        {
            printf("Searching Value at Location [%d].\n",middle );
            break;
        }
        else if (arr[middle] < search)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }

    }
    if (first > last)
    {
        printf("%d is not present in the array.\n", search);
    }

    return 0;
}
