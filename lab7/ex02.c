#include<stdio.h>
#include<string.h>

int main()
{
    int i,n;
    struct profile
    {
        char name[20];
        char surname[20];
        int age;
        float score;
    } s[10];

        for(i=1;i<4;i++)
        {
            printf("\nStudent %d's name: ",i);
            scanf("%s %s",s[i].name,s[i].surname);
            printf("Student %d's age: ",i);
            scanf("%d",&s[i].age);
            printf("Student %d's score: ",i);
            scanf("%f",&s[i].score);
        }
            if(s[1].score >= s[2].score && s[1].score >= s[3].score)
            {
                printf("The highest scores belongs to %s %s at %.2f scores!\n",s[1].name,s[1].surname,s[1].score);
            }
            else if(s[2].score >= s[1].score && s[2].score >= s[3].score)
            {
                printf("The highest scores belongs to %s %s at %.2f scores!\n",s[2].name,s[2].surname,s[2].score);
            }
            else
            {
                printf("The highest scores belongs to %s %s at %.2f scores!\n",s[3].name,s[3].surname,s[3].score);
            }
    return 0;
}