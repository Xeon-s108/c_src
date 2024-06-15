#include <stdio.h>
#include <string.h>
void main()
{
    int i;
    printf("Enter the range of strings : ");
    scanf("%d", &i);
    char s1[i], s2[i], temp[i];
    printf("\nEnter the values in string 1 :\n");
    gets(s1);
    printf("Enter the values in string 2 :\n");
    gets(s2);
    printf("The string 1 before swapping is :\n%s\n", s1);
    printf("The string 2 before swapping is :\n%s\n", s2);
    strcpy(s1, temp);
    strcpy(s2, s1);
    strcpy(temp, s2);
    printf("The string 1 after swapping is :\n%s\n", s1);
    printf("The string 2 after swapping is :\n%s\n", s2);
}