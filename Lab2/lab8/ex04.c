#include<stdio.h>
int main()
{
    int a = 6;
    int b[] = {3,1,2,3,4,5,6};
    int i;
    int *ptr = b;

    for(i=0; i<=a; i++){
        printf("%d\n",*(b+i));
    }
}