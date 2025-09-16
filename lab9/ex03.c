#include<stdio.h>
int i;

void two_int(int num1,int num2){
    int result = (num1*num1)+(num2*num2);
    printf("Sum of squares of 2 and 3 is %d", result);
}

int main(){
    int a,b;
    printf("enter the two integers: ");
    scanf("%d %d",&a,&b);
    two_int(a,b);
    return 0;
}