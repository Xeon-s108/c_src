#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c, d, x, y;
    printf("a(x^2)+bx+c = 0\n");
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);

    d = ((b * b) - (4 * a * c));
    x = ((-b + (sqrt(d))) / (2 * a));
    y = ((-b - (sqrt(d))) / (2 * a));

    printf("The roots of the given quadratic equation are : %d and %d\n", x, y);
}