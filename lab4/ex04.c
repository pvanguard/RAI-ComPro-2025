#include<stdio.h>

int main(){
    int baseNum, num=0;
    printf("Enter a number: ");
    scanf("%d",&baseNum);
    printf("Multiplication table\n");
    while(num<=12)
    {
        printf("%4d * %-2d = %-3d\n", baseNum,num, baseNum*num);
        num++;
    }

    return 0;
}