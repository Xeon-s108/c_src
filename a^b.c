/* This Program print a^b for given values. */

#include<stdio.h>
void main ()
{
double a, b, num1=1, val=1;
printf("Enter the base number :\n");
scanf("%lf",&a);
printf("Enter the power :\n");
scanf("%lf",&b);
while (num1 <= b)
    {
        val = val*a;
        num1++;
    }
printf("The value of %lf to the power %lf is : %lf\n", a, b, val);    

}
