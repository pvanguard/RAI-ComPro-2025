#include<stdio.h>
int main()
{
    int count=0,n,even=0,odd=0;
    int num[10];
    for (count=1;count<=10;count++)
    {
        printf ("Enter the value %d : ",count);
        scanf ("%d",&num[n++]);
    }
        for (n=0;n<10;n++)
        {
            if(num[n]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", even);

    return(0);
} 