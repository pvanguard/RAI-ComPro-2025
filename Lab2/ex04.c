#include<stdio.h>
int main()

{
    char name[20];
    int id,scr;
    float phy;
    float cal;


    printf("Enter your Name: ");
    scanf("%s",name);

    printf("Enter your student ID: ");
    scanf("%d",&id);

    printf("Enter your Programming score: ");
    scanf("%d",&scr);

    printf("Enter your Physics score: ");
    scanf("%f",&phy);

    printf("Enter your Calculus score: ");
    scanf("%f",&cal);

    float GPA = (phy+cal+scr)/3;

    printf("\nHi %s%d! Your GPA is %.2f\n",name,id,GPA);

    return 0;

}





