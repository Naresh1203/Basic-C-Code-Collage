//
//accept two integer andan operator
#include <stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter First Number= ");
	scanf("%d",&a);
	printf("Take an operator=");
	scanf("%c",&c);
	scanf("%c",&c);
	printf("Enter Second Number=");
	scanf("%d",&b);


	switch(c)
	{
		case '+' :
			printf("%d+%d=%d",a,b,a+b);
			break;

		case '-' :
			printf("%d-%d=%d",a,b,a-b);
			break;
		case '*' :
			printf("%d*%d=%d",a,b,a*b);
			break;
		case '/' :
			printf("%d/%d=%d",a,b,a/b);
		default : printf("Operator should be +,-,*,/");
	}
}


