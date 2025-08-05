#include<stdio.h>

#define SIZE 10
int main()
{
    int num[SIZE],temp,n;
    for (n=0; n<SIZE; n++)
    {
        printf ("Enter the value %d : ",n+1);
        scanf ("%d",&num[n]);
    }
    printf("Value in array are: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);

    return(0);
} 