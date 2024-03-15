// modular program to add two arrays
#include <stdio.h>

void read(float a[10], int n);
void add(float a[10], float b[10], float c[10], int n);
void print(float c[10], int n);

int main() {
    int n;
    float a[10], b[10], c[10];

    printf("Enter the limit of array: ");
    scanf("%d", &n);

    printf("Enter the first array:\n");
    read(a, n);

    printf("Enter the second array:\n");
    read(b, n);

    add(a, b, c, n);

    printf("The sum of the arrays is:\n");
    print(c, n);

    return 0;
}

void read(float a[10], int n) {
    int i;

    for (i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }
}

void add(float a[10], float b[10], float c[10], int n) {
    int i;

    for (i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}

void print(float c[10], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%.1f\n", c[i]);
    }
}

