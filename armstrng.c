#include <stdio.h>
int main()
{
    int num, temp, d1, val=0;
    printf("\nEnter the number :");
    scanf("%d", &num);

    /*This program checks whether a number is Armstrong number or not!*/
    num = temp;
    while (num > 0)
    {
        d1 = num % 10;
        val = val + (d1 * d1 * d1);
        num = num / 10;
    }

    if (temp == val)
        printf("The number %d is an Armstrong number.", temp);
    else
        printf("The number %d is not an Armstrong number.", temp);
return 0;
}