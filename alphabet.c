//program to check given alphabet is vowel or consonent
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a Character");
	scanf("%c",&ch);
	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("Given alphabet is '%c' is Vowel",ch );
	}
	else
	{
	printf("Given alphabet is '%c' is consonent",ch);
	}

}
