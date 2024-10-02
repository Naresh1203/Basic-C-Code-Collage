//find which is maximum number for 3 integer 
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter First Number =");
	scanf("%d",&a);
	printf("Enter Second Number =");
	scanf("%d",&b);
	printf("Enter Third Number =");
	scanf("%d",&c);
	if (a<b)
	{
		if (b>c)
		{
			printf("%d is maximum",b);
		}
		else 
		{
			printf("%d is maximum",c);
		}
	}
	else 
	{
		printf("%d is maximum ",a);
	}
}
