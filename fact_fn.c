#include <stdio.h>
int fact( int num)
{
    int i;
    long long int val = 1;
    for (i = 1; i<=num; i++)
    {
        val *= i;
    }
    return val;
}
void main()
{
    int num;
    long long int val;
    printf("Enter the positive number : ");
    scanf("%d", &num);
    if (num > 0)
       {
         val = fact(num); 
        printf("The factorial of %d is %lld\n",num , val);  
       }
    else
        printf("Please enter a positive number!\n");
}