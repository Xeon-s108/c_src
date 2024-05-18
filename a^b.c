#include<stdio.h>
void main ()
{
int a, b, num1=1, val=1;
printf("Enter the base number :\n");
scanf("%d",&a);
printf("Enter the power :\n");
scanf("%d",&b);
while (num1 <= b)
    {
        val = val*a;
        num1++;
    }
printf("The value of %d to the power %d is : %d\n", a, b, val);    

}