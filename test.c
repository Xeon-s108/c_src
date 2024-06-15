#include <stdio.h>
void main()
{
    int i = 4, j = -1, k = 0, w, x, y, z;
    w = ++i || ++j && k++;
    x = i && j || k;
    y = i << 2;
    z = (i > k ? i + 2 : k + 3);
    printf("w = %d, x = %d, y = %d, z = %d”, w, x, y, z);
}