//PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE
#include <stdio.h>
int main()
{
    int p, c, m, h, e;
    // maths =m,physics=p,chemistry=c,hindi=h,english=e
    printf("enter marks in physics: ");
    scanf("%d", &p);
    printf("enter marks in chemistry: ");
    scanf("%d", &c);
    printf("enter marks in maths: ");
    scanf("%d", &m);
    printf("enter marks in hindi: ");
    scanf("%d", &h);
    printf("enter marks in english: ");
    scanf("%d", &e);
    printf("total is %d :", p + c + m + h + e);
    return 0;
}