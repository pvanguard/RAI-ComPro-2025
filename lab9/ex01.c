#include <stdio.h>
#include <math.h>

double Area(double r) {
    double pi;
    pi = 3.14159;
    double area = pi * r * r;
    return area;
}
double Cir(double r) {
    double pi;
    pi = 3.14159;
    double cir = pi * r * 2;
    return cir;
}
int main() {
    double r;

    printf("Enter the radius in cm: ");
    scanf("%lf", &r);

    double area = Area(r);
    double cir = Cir(r);

    printf("The area of the triangle is: %.2fl\n", area);
    printf("The circumference of the triangle is: %.2fl\n", cir);

    return 0;
}