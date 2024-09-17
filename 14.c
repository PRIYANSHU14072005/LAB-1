//C program to check whether a given character is upper case, lower case, number or special character 
#include<stdio.h> //header file,inbuilt library
 int main()
 {
    char x; //declare variable 
    printf("enter the character:");
    scanf("%c",&x);
    if (x>='A' && x<='Z') //range of uppercase 
    {
        printf("%c is uppercase",x);

    }
    else if (x>='a' && x<='z' ) //range of lowercase
    {
        printf("%c is lowercase",x);
    }
    else if (x>='0' && x<='9') // number range for character is 0 to 9 
    {
        printf("%c is number",x);

    }
    else 
    {
        printf("%c is special symbol",x);
    }
    return 0;
}
