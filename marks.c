#include <stdio.h>
void main()
{
    int maths, phy, chem, eng, ip, total, per;
    printf("\nEnter your marks in Maths out of 100 : ");
    scanf("%d", &maths);
    printf("\nEnter your marks in Physics out of 100 : ");
    scanf("%d", &phy);
    printf("\nEnter your marks in Chemistry out of 100 : ");
    scanf("%d", &chem);
    printf("\nEnter your marks in English out of 100 : ");
    scanf("%d", &eng);
    printf("\nEnter your marks in IT out of 100 : ");
    scanf("%d", &ip);
    total = maths + phy + chem + eng + ip;
    printf("\nYour total marks are %d out of 500.", total);
    per = (total/5);
    printf("\nYou scored %d percent.", per);
    if (per >= 60)
        printf("\nYou scored 1st Division.");
    else if (per >= 45)
        printf("\nYou scored 2nd Division.");
    else if (per >= 33)
        printf("\nYou scored 3rd Division.");
    else 
        printf("\nYou Failed!");    
}