//to allocate memory dynamically for n integers such that the memory is initialized to 0. And display it.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,n;
    printf("Enter the element you want to display");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
}