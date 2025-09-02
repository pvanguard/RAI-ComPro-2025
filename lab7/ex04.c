#include <stdio.h>

struct Vector {
    float x;
    float y;
};

int main() {
    struct Vector u, v, resultant;

    printf("u_x: ");
    scanf("%f", &u.x);
    printf("u_y: ");
    scanf("%f", &u.y);

    printf("v_x: ");
    scanf("%f", &v.x);
    printf("v_y: ");
    scanf("%f", &v.y);

    resultant.x = u.x + v.x;
    resultant.y = u.y + v.y;

    printf("Resultant vector is equivalence to %.1fi + %.1fj\n",
           resultant.x, resultant.y);

    return 0;
}