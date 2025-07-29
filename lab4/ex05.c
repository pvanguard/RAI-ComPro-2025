#include<stdio.h>
int main()
{
    int count, num, factorial = 1;

    
    printf("Enter a number: ");
    scanf("%d" ,&num);

    for (count = 1; count <= num; count++){
        factorial = factorial * count;
    }
    printf("Factorial of %d is %d", num,factorial);
    return 0;
}