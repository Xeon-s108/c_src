#include <stdio.h>
void main()
{
    int num, val, d1, d2, d3, rev;
    printf("\nEnter the 3 digit number :");
    scanf("%d", &num);

    /*This program checks whether a 3 digit number is palindrome or not!*/

    d1 = num % 10;
    val = num / 10;
    d2 = val % 10;
    val = val / 10;
    d3 = val % 10;

    rev = ((d1 * 100) + (d2 * 10) + (d3));
    if (num == rev)
        printf("\nThe given number %d is palindrome.", num);
    else
        printf("The given number %d is not palindrome.", num);
}