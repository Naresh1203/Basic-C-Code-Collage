// Arthmetic operation using pointer
#include<stdio.h>
void main()
{
    int *ptr1 ,a,b;
    int *ptr2 ;
    float div;
    printf("Enter the two number");
    scanf("%d",&a);
    scanf("%d",&b);
    ptr1=&a;
    ptr2=&b;
    printf("Addition = %d \n",*ptr1 + *ptr2);
    printf("Subtraction = %d \n",*ptr1 - *ptr2);
    printf("Multiplication = %d \n",*ptr1 * *ptr2);
    div=*ptr1 / *ptr2;
    printf("Division = %.2f \n ", div);
    

}