#include <stdio.h>

//zadanie 3.2.3

int funkcja(int *a, int *b) {
    int tempa = *a;
    int tempb = *b;
    if (*a > *b) {
        *a = tempb;
        *b = tempa;
    }
    return 1;
}
int main(void) {
    int a = 10;
    int b = 5;

    int *pa = &a;
    int *pb = &b;

    funkcja(pa, pb);
    printf("%d\n%d", a, b);
}