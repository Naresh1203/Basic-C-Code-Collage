//Eccess the element and give to storage to pointer and display the element using pointer
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,n;
    printf("Enter the element you want to display");
    scanf("%d",&n);
    p=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
}
