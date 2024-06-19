#include<stdio.h>
void main ()
{
int i, size;
printf("Enter the size of the array :\n");
scanf("%d",&size);
int arr[size];
printf("Enter the numbers in array :\n");
// gets(revarr);
for (i = 0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
for (i=0;i<size;i++)
    {
    printf("%d ",arr[i]);
    }
    printf("\n");
}