#include<stdio.h>
int main()
{
    int a = 6;
    int b[] = {3,1,2,3,4,5,6};
    int i;
    int *ptr = b;
    int sum = 0;

    for(i=0; i<=a;i++){
        sum += *ptr;
        *ptr++;
    }
    printf("The sum of array is %d\n",sum);
    return 0;
}