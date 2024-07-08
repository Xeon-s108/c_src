#include <stdio.h>
#include <string.h>
int main()
{
    int count;
    printf("Enter the number of names :\n");
    scanf("%d",&count);
    char str[count][20], t[20];
    int i, j;
    printf("Enter the names :\n");
    for (i = 0; i < count; i++)
        scanf("%s", str[i]);
    for (i = 1; i < count; i++)
    {
        for (j = 1; j < count; j++)
        {
            if (strcmp(str[j - 1], str[j]) > 0)
            {
                strcpy(t, str[j - 1]);
                strcpy(str[j - 1], str[j]);
                strcpy(str[j], t);
            }
        }
    }
    printf("\nThe Names in alphabetical order :\n");
    for (i = 0; i < count; i++)
        printf("%s\n", str[i]);
    return 0;
}