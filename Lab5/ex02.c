#include<stdio.h>

int main()
{
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9},i;
    
        printf("Reversed Array: ");
        for(i = 8; i>=0; i--)
        {
            if(i==0)
                printf("%d",original[i]);
            else
                printf("%d,",original[i]);    
        }
    printf("\n");
    return(0);
} 