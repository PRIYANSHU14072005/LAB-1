//PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION
#include <stdio.h>
int main()
{
    int p, c, m, e, h, t;
    /*p=marks in physics out of 100
    c=marks in chemistry out of 100
    m=marks in maths out of 100
    e=marks in english out of 100
    h=marks in hindi out of 100
    */
    printf("enter marks in physics (0-100): ");
    scanf("%d", &p);
    printf("enter marks in chemistry (0-100): ");
    scanf("%d", &c);
    printf("enter marks in maths (0-100): ");
    scanf("%d", &m);
    printf("enter marks in english(0-100): ");
    scanf("%d", &e);
    printf("enter marks in hindi(0-100): ");
    scanf("%d", &h);
    printf("total marks is %d\n", p + c + m + e + h);
    t = p + c + m + e + h;
    if (t >= 450)
    {
        printf("A");
    }
    else if (400 >= t > 350)
    {
        printf("C");
    }
    else if (350 >= t > 300)
    {
        printf("C");
    }
    else if (300 >= t > 250)
    {
        printf("D");
    }
    else if (200 >= t > 150)
    {
        printf("E");
    }
    
    return 0;
}