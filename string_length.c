#include<stdio.h>
void main()
{
    char s[50];
    int i;
    printf("Enter anything ");
    gets(s);
   for(i=0;s[i]!='\0';i++)
  printf("Lenth of string = %d",i);
}