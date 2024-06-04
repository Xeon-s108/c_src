/*This program performs bubble sort on user given integer values of user's desired range.*/
#include <stdio.h>
void main()
{
    int i = 0, j, lim, temp;

    /*Taking range as input from user.*/
    printf("Enter the range : ");
    scanf("%d", &lim);
    int arr[lim];

    /*Taking array values from user.*/
    for (i = 0; i < lim; i++)
    {
        printf("\nEnter the value : ");
        scanf("%d", &arr[i]);
    }

    /*BUBBLE SORT HERE*/
    for (i = 0; i < lim - 1; i++)
    {
        for (j = 0; j < lim - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }

    printf("\nThe sorted array in ascending order is :\n");
    for (i = 0; i < lim; i++)
    {
        printf("%d ", arr[i]);
    }
}