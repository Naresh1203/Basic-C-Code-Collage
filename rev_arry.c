#include<stdio.h>
int main()
	{
		int a[10],n,i,j;
		printf("Enter how many elements");
		scanf("%d",&n);
		for (i=0;i<=n;i++)
		scanf("%d",&a[i]);
		printf("You entered array =%d",i);
		for (i=0;i<n;i++)
			printf("%d\t",a[i]);
		printf("reverse array=\n");
		for (i=n-1;i>=0;i--)
			printf("%d\t",a[i]);
	}
