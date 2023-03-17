#include <stdio.h>

int main()
{
    int arr[100], search, i, n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("Searching Value at Location [%d].\n",i );
            break;
        }
    }

    if (i == n)
    {
        printf("%d is not present in the array.\n", search);
    }

    return 0;
}
