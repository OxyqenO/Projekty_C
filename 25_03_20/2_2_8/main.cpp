#include <stdio.h>
#include <stdlib.h>

double sqroot(double square)
{
    double root=square/3;
    int i;
    if (square <= 0) return 0;
    for (i=0; i<32; i++)
        root = (root + square / root) / 2;
    return root;
}

int main() {
    double a;
    scanf("%lf", &a);
    if (a<0) {
        printf("Liczba jest ujemna\n");
    }
    else {
        printf("%lf", sqroot(a));
    }
}

