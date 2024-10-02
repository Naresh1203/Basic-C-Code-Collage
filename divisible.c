//program = accept a number which is divisible by 3 and 5
#include <stdio.h>
int main()
{
	int a;
	printf("Accept a inter number =");
	scanf("%d",&a);
	if(a%3==0&&a%5==0)
	{
		printf("Given number '%d' is divisible by 3,5",a);
	}
	else
	{
		printf("Given number '%d' is not divisible by 3,5",a);
	}
	return 0;
}
