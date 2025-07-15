#include<stdio.h>
int main()

{
    int ab ;
    int weight;
    float height;
    char name[20];
    char gender;
    char uni[20];

    printf ("Enter your Name: ");
    scanf ("%s",name);

    printf ("Enter your age: ");
    scanf ("%d",&ab);
    //printf("%d" ,age);

    printf ("Enter your height: ");
    scanf ("%f",&height);

    printf ("Enter your weight: ");
    scanf ("%d",&weight);

    printf ("Enter your gender: ");
    scanf ("%s",&gender);

    printf ("Enter your Education Qualification: ");
    scanf ("%s",uni);   

    printf ("\nName: %s ",name);
    printf("\tAge: %d",ab);
    printf("\tGender: %s",&gender);
    printf("\nHeight: %.1f",height);
    printf("\tWeight: %4d",weight);
    printf("\nEducation Qualification: %s",uni);

return 0;
}