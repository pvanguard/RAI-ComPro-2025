#include<stdio.h>
int main()
{
    int sum = 0, count=1, num;

    while (count<=10)
    {
    printf("%d.Enter the number: ", count);
    scanf("%d",&num);
    sum = sum + num;
    count++;
    }
    printf ("Total sum is %d", sum);
    return 0;
}