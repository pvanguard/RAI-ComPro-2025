#include <stdio.h>
  int main()
{
    int *ptr , *ptr1 , *ptr2;
    struct num
    {
        int num1 ;
        int num2 ;
        int re ;
    }s[3];
    scanf("%d",&s[1].num1);
    scanf("%d",&s[1].num2);
    ptr = &s[1].re ; 
    ptr1 = &s[1].num1 ; 
    ptr2 =  &s[1].num2 ; 
    *ptr = *ptr1 + *ptr2 ;
    printf("%d",*ptr);
}