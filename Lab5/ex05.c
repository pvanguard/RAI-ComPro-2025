#include<stdio.h>
#define VALUE 8
int main(){
    int num[VALUE],min,max,i;
    for(i=1;i<=VALUE;i++){
        printf("Enter number %d :",i);
        scanf("%d",&num[i]);
    }
    max = num[0];
    min = num[1];
    for(i=1;i<=VALUE;i++){
        if(num[i]>max){
            max = num[i];
        }
        else{
            min = num[i];
        }
    }
    printf("Smallest number : %d\n",min);
    printf("Biggest number : %d\n",max);
}