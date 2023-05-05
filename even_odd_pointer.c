// checking number is even or odd using pointer
#include<stdio.h>
void main()
{
    int *ptr ,a;

    printf("Enter the number");
    scanf("%d",&a);
   
    ptr=&a;
  
    if(*ptr %2==0)
    printf("%d is even " ,*ptr);
    else
    printf("%d is odd",*ptr);

}