#include<stdio.h>

int main(){

    int height;
    int radius;
    float pi = 22/7;
    float a = 0.3333333333333333333;
    float volume;

    printf ("Enter cone height: ");
    scanf ("%d",&height);

    printf ("Enter cone base radius: ");
    scanf ("%d",&radius);

    volume = a*pi*(radius*radius)*height;

    printf ("Cone volume = %.2f\n" ,volume);

if (volume > 260) {
    printf("This cone is perfect for Supun project");
}
else{
    printf("This cone is not fit for this project");
}

return 0;
}