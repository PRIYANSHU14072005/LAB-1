/*WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE
FORMULA.
 CM = M/2+P/2+C/2+E
WHERE CM = Cut of f mark
M = Marks in Mathematics out of 200
P = Marks in Physics out of 200
C = Marks in Chemistry out of 200
E = Marks in entrance examination out of 100*/
#include <stdio.h>
int main()
{
    int p, c, m, e;
    /*p=marks in physics out of 200
    c=marks in chemistry out of 200
    m=marks in maths out of 200
    e=marks in english out of 200
    */
    printf("enter marks in physics (0-200): ");
    scanf("%d", &p);
    printf("enter marks in chemistry (0-200): ");
    scanf("%d", &c);
    printf("enter marks in maths (0-200): ");
    scanf("%d", &m);
    printf("enter marks in english(0-200): ");
    scanf("%d", &e);
    printf("cutoff marks is %d", m / 2 + p / 2 + c / 2 + e);
    return 0;
}
