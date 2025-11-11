#include <stdio.h>

void genericSwap(void *a, void *b, char type) {
    switch (type) {
        case 'i': {
            int temp = *(int *)a;
            *(int *)a = *(int *)b;
            *(int *)b = temp;
            break;
        }
        case 'f': {
            float temp = *(float *)a;
            *(float *)a = *(float *)b;
            *(float *)b = temp;
            break;
        }
        case 'd': {
            double temp = *(double *)a;
            *(double *)a = *(double *)b;
            *(double *)b = temp;
            break;
        }
        case 'c': {
            char temp = *(char *)a;
            *(char *)a = *(char *)b;
            *(char *)b = temp;
            break;
        }
        default:
            printf("Invalid type.\n");
    }
}

int main() {
    int x = 10, y = 20;
    float f1 = 1.5, f2 = 2.5;
    double d1 = 10.11, d2 = 20.22;
    char c1 = 'A', c2 = 'B';

    printf("Before swap: x=%d, y=%d\n", x, y);
    genericSwap(&x, &y, 'i');
    printf("After swap: x=%d, y=%d\n\n", x, y);

    printf("Before swap: f1=%.2f, f2=%.2f\n", f1, f2);
    genericSwap(&f1, &f2, 'f');
    printf("After swap: f1=%.2f, f2=%.2f\n\n", f1, f2);

    printf("Before swap: d1=%.2lf, d2=%.2lf\n", d1, d2);
    genericSwap(&d1, &d2, 'd');
    printf("After swap: d1=%.2lf, d2=%.2lf\n\n", d1, d2);

    printf("Before swap: c1=%c, c2=%c\n", c1, c2);
    genericSwap(&c1, &c2, 'c');
    printf("After swap: c1=%c, c2=%c\n", c1, c2);

    return 0;
}
