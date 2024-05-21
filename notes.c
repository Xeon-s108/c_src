#include <stdio.h>
void main()
{
    int amt, quo, rem;
    printf("Enter the amount : ");
    scanf("%d", &amt);

// This Program counts number of notes required for given value.

    if (amt >= 2000)
    {
        quo = (amt / 2000);
        rem = (amt % 2000);
        quo += (rem / 500);
        rem = (rem % 500);
        quo += (rem / 100);
        rem = (rem % 100);
        quo += (rem / 50);
        rem = (rem % 50);
        quo += (rem / 20);
        rem = (rem % 20);
        quo += (rem / 10);
        rem = (rem / 10);
        quo += (rem / 5);
        rem = (rem % 5);
        quo += (rem / 2);
        rem = (rem % 2);
        quo += (rem / 1);
        printf("The minimum no of required notes will be : %d\n", quo);
    }
    else if (2000 > amt >= 500)
    {
        quo = amt / 500;
        rem = amt % 500;
        quo += rem / 100;
        rem = rem % 100;
        quo += rem / 50;
        rem = rem % 50;
        quo += rem / 20;
        rem = rem % 20;
        quo += rem / 10;
        rem = rem / 10;
        quo += rem / 5;
        rem = rem % 5;
        quo += rem / 2;
        rem = rem % 2;
        quo += rem / 1;
        printf("The minimum no of required notes will be : %d\n", quo);
    }
    else if (500 > amt >= 100)
    {
        quo = amt / 100;
        rem = amt % 100;
        quo += rem / 50;
        rem = rem % 50;
        quo += rem / 20;
        rem = rem % 20;
        quo += rem / 10;
        rem = rem / 10;
        quo += rem / 5;
        rem = rem % 5;
        quo += rem / 2;
        rem = rem % 2;
        quo += rem / 1;
        printf("The minimum no of required notes will be : %d\n", quo);
    }
    else if (100 > amt >= 50)
    {
        quo = amt / 50;
        rem = amt = 50;
        quo += rem / 20;
        rem = rem % 20;
        quo += rem / 10;
        rem = rem / 10;
        quo += rem / 5;
        rem = rem % 5;
        quo += rem / 2;
        rem = rem % 2;
        quo += rem / 1;
        printf("The minimum no of required notes will be : %d\n", quo);
    }
    else if (50 > amt >= 20)
    {
        quo = amt / 20;
        rem = amt % 20;
        quo += rem / 10;
        rem = rem / 10;
        quo += rem / 5;
        rem = rem % 5;
        quo += rem / 2;
        rem = rem % 2;
        quo += rem / 1;
        printf("The minimum no of required notes will be : %d\n", quo);
    }
    else if (20 > amt >= 10)
    {
        quo = amt / 10;
        rem = amt % 10;
        quo += rem / 5;
        rem = rem % 5;
        quo += rem / 2;
        rem = rem % 2;
        quo += rem / 1;
        printf("The minimum no of required notes will be : %d\n", quo);
    }
    else if (10 > amt >= 5)
    {
        quo = amt / 5;
        rem = amt % 5;
        quo += rem / 2;
        rem = rem % 2;
        quo += rem / 1;
        printf("The minimum no of required notes will be : %d\n", quo);
    }
    else if (5 > amt >= 2)
    {
        quo = amt / 2;
        rem = amt % 2;
        quo += rem / 1;
        printf("The minimum no of required notes will be : %d\n", quo);
    }
    else if (2 > amt >= 1)
        printf("The minimum no of required notes will be : %d\n", amt);
}
