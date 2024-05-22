#include <stdio.h>
int main()
{
    int val, num, d1, rev=0;
    printf("\nEnter the 3 digit number :");
    scanf("%d", &val);
    val = num;
    while (val > 0)
    {
        d1 = val % 10;
        rev = ((rev * 10) + d1);
        val = val / 10;
    }

    if (num == rev){
        printf("\nThe given number %d is palindrome.", num);}
    else{
        printf("The given number %d is not palindrome.", num);}
return 0;
}