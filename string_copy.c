#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    gets(str1);
    strcpy(str2,str1);
    printf("%s",str2);
}