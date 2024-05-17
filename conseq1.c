#include <stdio.h>
int main()
{
    int initial, final, sum = 0, num1;
    printf("Enter the first no of range :\n");
    scanf("%d", &initial);
    printf("Enter the last number of range :\n");
    scanf("%d", &final);
    num1 = initial;
    printf("The even numbers between %d and %d are : \n", initial, final);
    while (num1 <= final)
    {
        if (num1 % 2 == 0)
        {
            sum = sum + num1;
            printf("%d, ", num1);
            num1 += 2;
        }
        else
        {
            num1++;
        }
    }
    printf("\nThe sum of even numbers from %d to %d is : %d\n", initial, final, sum);
    return 0;
}