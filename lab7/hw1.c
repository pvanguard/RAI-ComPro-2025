#include <stdio.h>
   int main (){
     int i ;
     int d ;
     int mat[3][3] ;
     for (i = 0; i < 3 ; i++)
     {
         for (d = 0; d < 3 ; d++)
        { 
          scanf("%d",&mat[i][d]);
        }
    }
    int (*ptr)[3] = mat;
    for (i = 0; i < 3 ; i++)
    {
       for (d = 0; d < 3; d++)
       {
           printf("%d ", ptr[i][d]);
       }
       printf("\n");
    }
    
}