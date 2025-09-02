#include<stdio.h>
#include<string.h>

int i,totalM,totalS;
int main()
{

    struct profile
    {
        int m,s;
    }t[4];

    for(i=1;i<=3;i++)
    {
        printf("Time input (m:s): ");
        scanf("%d:%d",&t[i].m,&t[i].s);
    }
    for(i=1;i<=3;i++)
    {
        t[i].m = t[i].m*60;
    }
    totalM = t[1].m + t[2].m + t[3].m;
    totalS = t[1].s + t[2].s + t[3].s;
    printf("Total time elapsed: %d second(s)",totalM + totalS);


}