#include <stdio.h>

#define MAX 100

float avg(int g[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += g[i];
    return (float)s / n;
}

int high(int g[], int n) {
    int h = g[0];
    for (int i = 1; i < n; i++) if (g[i] > h) h = g[i];
    return h;
}

int low(int g[], int n) {
    int l = g[0];
    for (int i = 1; i < n; i++) if (g[i] < l) l = g[i];
    return l;
}

int main() {
    int n, g[MAX];
    char name[MAX][50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", name[i]);
        printf("Enter grade of %s: ", name[i]);
        scanf("%d", &g[i]);
    }

    printf("\n--- Results ---\n");
    printf("Average grade: %.2f\n", avg(g, n));
    printf("Highest grade: %d\n", high(g, n));
    printf("Lowest grade: %d\n\n", low(g, n));

    printf("Students who passed:\n");
    for (int i = 0; i < n; i++)
        if (g[i] >= 60) printf("%s\n", name[i]);

    return 0;
}