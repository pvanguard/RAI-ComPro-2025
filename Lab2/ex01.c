#include<stdio.h>
int main()

{

    float point;
    int number;
    char name[10];

    printf ("Enter your interger value: ");
    scanf ("%d",&number);
    printf("you entered: %d" ,number);

    printf ("\nEnter your float value: ");
    scanf ("%f",&point);
    printf("you entered: %.2f" ,point);

    printf ("\nEnter your a character: ");
    scanf ("%s",name);
    printf("you entered: %s" ,name);


return 0;
}