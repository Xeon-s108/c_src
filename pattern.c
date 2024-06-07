#include <stdio.h>
void main()
{
    int pat, i, j, lim;
    printf("Enter the range : ");
    scanf("%d", &lim);
    for (i = 0; i < lim; i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}