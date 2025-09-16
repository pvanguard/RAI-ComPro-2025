#include <stdio.h>
#include <math.h>
int i;

int PrimeCheck(int num) 
{
    if (num<=1) 
    {
        return 0; 
    }
    for (i=2;i<=sqrt(num);i++) 
    {
        if (num%i==0) 
        {
            return 0; 
        }
    }
    return 1;
}
int main()
{
    int x, y;
    printf("Enter the start and end numbers: ");
    scanf("%d %d",&x,&y);

    printf("The prime numbers within the intervals are: \n");
    for (int i=x;i<=y;i++) 
    {
        if (PrimeCheck(i)) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}