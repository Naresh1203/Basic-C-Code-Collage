#include<stdio.h>
void main()
{
    char s[100];
    printf("Enter Anything = ");
    scanf("%[^\n]",s);
    printf("You Enter = %s",s);
}