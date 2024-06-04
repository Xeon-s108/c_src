/* This program prints the sum of [n!/npow(n)] series! */
#include <stdio.h>
#include <math.h>
void main()
{
    float i, num = 1, den = 1, lim, sum = 0;
    printf("Enter the number of last term in series : ");
    scanf("%f", &lim);
    for (i = 1; i <= lim; i++)
    {
        num = num * num;
        den = pow(den, den);
        sum = sum + (num / den);
        num++;
        den++;
    }
    printf("\nThe sum of [%f!/%fpow(%f)] is : %f", lim, lim, lim, sum);
}