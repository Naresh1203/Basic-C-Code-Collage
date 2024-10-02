#include <stdio.h>
	int main()
{ int n,a,cnt;
	
	scanf("%d",&a);
        cnt:0;
	while(n<20) 
	{
		n=cnt*a;
		printf("%d",n);
		cnt++;
		a++;
	}
	return (0);
}
