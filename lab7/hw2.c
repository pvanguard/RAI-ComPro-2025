#include <stdio.h>
    int main() 
{
    float a ;
    float b ;

    scanf("%f",&a);
    scanf("%f",&b);
    float *ptr1 , *ptr2 ;
    ptr1 = &a ;
    ptr2 = &b ;
    printf("Before swap : a = %f   b = %f\n",*ptr1,*ptr2);
    printf("After swap : a = %f  b = %f\n",*ptr2,*ptr1);

}