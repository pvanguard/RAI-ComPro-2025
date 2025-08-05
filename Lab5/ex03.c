#include<stdio.h>

#define SIZE 5
int main()
{
    
    int mark[SIZE],temp,n,sum,j,max;

    for (n=0;n<SIZE;n++)
    {
        printf ("Enter the marks of student %d : ",n+1);
        scanf ("%d",&mark[n]);
        sum = sum+mark[n];
    }
    max = mark[1];

    for (j=1;j<SIZE;j++)
    {
        if(mark[j]>max){
            max = mark[j];
        }
    }
    printf("Total Marks: %d\n", sum);
    printf("Highest Marks: %d\n", max);
    return(0);
} 