#include<stdio.h>


int main(){

    int num;
    

    printf ("Enter a number: ");
    scanf ("%d",&num);
    switch(num){
        case 0 ... 100:
        switch(num%2){
            case 0: printf("%d is even number\n",num);
            break;
            case 1: printf("%d is odd number\n",num);
            break;
        }
        break;
       default: printf("%d is out of range\n",num);
    }
}