/* This program converts temperature from Celsius to Fahrenheit and vice versa. */

#include <stdio.h>
void main()
{
    int opt;
    float itemp, ntemp;
    printf("1. Celsius to Fahrenheit \n2. Fahrenheit to Celsius \nEnter your choice :");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("Enter the temperature in Celsius :\n");
        scanf("%f", &itemp);
        ntemp = (((itemp * 9) / 5) + 32);
        printf("The temperature %f 'C = %f 'F.", itemp, ntemp);
        break;
    case 2:
        printf("Enter the temperature in Fahrenheit :\n");
        scanf("%f", &itemp);
        ntemp = (((itemp - 32) * 5) / 9);
        printf("The temperature %f 'F = %f 'C.\n", itemp, ntemp);
        break;
    default:
        printf("Please enter valid option.\n");
    }
}
