#include<stdio.h>
int fac(int f);
int main()
{
	int f,ans;
	printf("Enter a number= ");
	scanf("%d",&f);
	ans=fac(f);
	printf("Factorial of given number is =%d",ans);
}
int fac(int f)
{
	if(f>1)
	{
	
		return(f*fac(f-1));
	}
	else 
	{
		return 1;
	}
	
}

