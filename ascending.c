/*This program prints given 3 numbers in ascending order. */

#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("\nEnter the first number : ");
    scanf("%d", &num1);
    printf("\nEnter the second number : ");
    scanf("%d", &num2);
    printf("\nEnter the third number : ");
    scanf("%d", &num3);

    if (num1>num2) {
        if (num2>num3)
            {printf("%d > %d > %d.\n",num1,num2,num3);}
        else 
           { printf("%d > %d > %d.\n",num1, num3, num2);}
    }
    else if (num2>num3) {
        if (num3>num1)
         {printf("%d > %d > %d.\n",num2,num3,num1);}
        else 
           { printf("%d > %d > %d.\n",num2, num1, num3);}
    }         
    else {
        if (num1>num2)
            {printf("%d > %d > %d.\n",num3,num1,num2);}
        else 
           { printf("%d > %d > %d.\n",num3, num2, num1);}
    }
}    
