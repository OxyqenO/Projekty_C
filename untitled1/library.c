#include "library.h"
#include <stdio.h>
#include <math.h>

int funkcja(a,b) {
    if (a<b) {
        return a;
    }
    else if (b<a) {
        return b;
    }
    else {
        printf("%d i %d sa sobie rowne", a, b);
        return 0;
    }
}

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int *pa = a;
    int *pb = b;
    printf(funkcja(*pa, *pb));
}