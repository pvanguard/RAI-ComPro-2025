#include<stdio.h>

int main(){
    int num1;

    printf ("Enter a number: ");
    scanf ("%d",&num1);

if (num1 > 100) {
    printf("%d is out of range \n",num1);

}

else if (num1 %2 == 0) {
    printf("%d is even \n",num1);

}
else if (num1 %2 != 0) {
    printf("%d is odd \n",num1);

}
return 0;
}