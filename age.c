// program to read the age of candidate
#include <stdio.h>
int main()
{
	int a;
	printf("Accept Candidate Age=");
	scanf("%d",&a);
	if (a>=18)
	{
		printf("Given Age of Candidate is %d years  \nIt is egligible for vote",a);
	}
	else 
	{
		printf("Given Age of Camdidate is %d years \n It is not egligible for vote",a);
	}
}	

