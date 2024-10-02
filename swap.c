#include<stdio.h>
void main()
{
	float a,b,temp;
	printf("Enter two number");
	scanf("%f",&a);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%f b=%f",a,b);


}
