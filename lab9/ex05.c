#include<stdio.h>
int i;

void sumeven(int arr[],int size){
    int sumeven = 0;
    int sumodd = 0;

    for(i=0;i<size;i++){
        if(arr[i]%2 == 0){
            sumeven += arr[i];
        }else{
            sumodd += arr[i];
        }
    }
    printf("Output: Sum of even: %d\n",sumeven);
    printf("\tSum of odd: %d\n",sumodd);
}

int main(){
    int numbers[5];
    for(i=0;i<5;i++){
        printf("Input: ");
        scanf("%d",&numbers[i]);
    }
    sumeven(numbers,5);
    return 0;
}