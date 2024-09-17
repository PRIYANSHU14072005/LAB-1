//PROGRAM TO CALCULATE AREA OF A TRIANGLE
#include <stdio.h>
int main()
{
    float h, b;
    printf("enter length of the base: ");
    scanf("%f", &b);
    printf("enter length of height: ");
    scanf("%f", &h);
    printf("area of trainge is %f", 0.5 * b * h);
    return 0;
}