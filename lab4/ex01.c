#include<stdio.h>
int main()
{
    int sum = 0, count, num;
    float avg;
    
    printf("Please Enter Your 10 Number \n");
    for (count = 1;count <= 10;count++){
        printf("%d.Enter the number: ",count);
        scanf("%d",&num);
        sum = sum + num;
    }
    avg = sum/10;
    printf ("Total sum is %d\n", sum);
    printf ("Average is %.2f\n", avg);
    return 0;
}