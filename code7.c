#include <stdio.h>
#include <math.h>
int main()
{
    float a, area;
    printf("take value of a");
    scanf("%f", &a);
    area = 3.14 * a * a;
    printf("value of area is %f", area);
        if (area == (int)area)
            {
                printf("1");
            }
        else
            {
                printf("0\n");
            }
    return 0;
}