#include <stdio.h>

int main(void) {
    int a = 10;
    int b =20;

    int *pa = &a;
    int *pb = &b;

    int tempa;
    int tempb;

    tempa = *pa;
    tempb = *pb;

    a = tempb;
    b = tempa;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}