#include<stdio.h>

int main(){
    char name[20],grade;
    float avg,cal,phy,compro;

    printf ("Enter your name: ");
    scanf ("%s",name);
    printf ("Enter your Calculus score: ");
    scanf ("%f",&cal);
    printf ("Enter your Physic score: ");
    scanf ("%f",&phy);
    printf ("Enter your Science score: ");
    scanf ("%f",&compro);
    avg = (cal+phy+compro)/3;

    if (avg >= 80){
        grade = 'A';
    }
    if (avg >= 70 && avg < 80){
        grade = 'B';
    }
    if (avg >= 70 && avg < 60){
        grade = 'C';
    }
    if (avg >= 60 && avg < 50){
        grade = 'D';
    }
    if (avg < 50){
        grade = 'F';
    }
    printf("%s, your average is %.2f. You got grade %c \n",name,avg,grade);
    return(0);
}