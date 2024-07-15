#include <stdio.h>
int fact( int num)
{
    int i, val = 1;
    for (i = 1; i<=num; i++)
    {
        val *= i;
    }
    printf("The factorial of %d is %d\n", num, val);
}

void main()
{
    int num, val;
    printf("Enter the positive number : ");
    scanf("%d", &num);
    if (num > 0)
        fact(num);   
    else
        printf("Please enter a positive number!\n");
}