#include<stdio.h>
#include<string.h>

typedef struct profile{
    char name[20];
    char surname[20];
    int age;
    float score;
} t_profile;

int main()
{
    t_profile s[10];
    int i;
    
    for(i=1;i<4;i++)
    {
    printf("\nStudent %d's name: ",i);
    scanf("%s %s",s[i].name,s[i].surname);
    printf("Student %d's age: ",i);
    scanf("%d",&s[i].age);
    printf("Student %d's score: ",i);
    scanf("%f",&s[i].score);
    }
    for(i=1;i<4;i++)
    printf("Student %d's score: %s, age %d\n",i,s[i].name,s[i].age);

    return 0;
}