#include <stdio.h>
void main()
{
    int i, size;
    printf("Enter the size of the array :\n");
    scanf("%d", &size);
    int arr[size], rev[size];
    printf("Enter the numbers in array :\n");
    // gets(revarr);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The original array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        rev[size - i - 1] = arr[i];
    }
    printf("The reversed array is :\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", rev[i]);
    }
    printf("\n");
}