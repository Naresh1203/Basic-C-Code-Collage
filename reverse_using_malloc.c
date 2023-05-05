//reversing the no using dynamic memory allocation using pointer
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,n,m;
    printf("Enter the element = ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(n));
    for(i=1;i<=n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=n;i!=0;i--)
    {
        printf("%d\t",*(p+i));
    }
}