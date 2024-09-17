//PROGRAM TO CALCULATE GROSS SALARY
#include <stdio.h>
int main(){
    int s, a, b, o;
    // s=basic, salary,a=allowances,b=bonus,o=overtimes
    printf("enter basic salary: ");
    scanf("%d",&s);
    printf("enter allownances: ");
    scanf("%d",&a);
    printf("enter bounu: ");
    scanf("%d",&b);
    printf("enter overtime: ");
    scanf("%d",&o);
    printf("gross salary is %d:", s + a + b + o);
    return 0;
}
