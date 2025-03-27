#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funkcja1(int x,int y) {
    /*
     Ax + B = 0
     X = -A/B, if A != 0
     if A==0:
     if B == 0 => każde X jest rozwiązaniem
     if b != 0 +> brak rozwiązań
     */

    int a = x;
    int b = y;

    printf("%d * x + %d = 0\n", a, b);
    if (a!=0) {
        printf("x = -%d/%d\n", b, a);
    }
    else {
        printf("0 * x + %d = 0\n", b);
        if (b==0) {
            printf("Kazde X jest rozwiazaniem.");
        }
        else {
            printf("Brak rozwiazan.");
        }
    }
    return 0;
}

int fukcja2(int x,int y,int z) {
    int a = x;
    int b = y;
    int c = z;

    printf("%dx^2 + %dx + %d = 0\n", a, b, c);
    if (a==0) {
        funkcja1(b,c);
    }
    else {
        int delta = b*b - 4*a*c;

        if (delta<0) {
            printf("Minusowa delta. Brak rozwiazan.");
        }
        else if (delta==0) {
            printf("Delta = 0, jedno rozwiazanie.");

            int x = -b/(2*a);
            printf("Rozwiazanie x = %d\n", x);
        }
        else {
            printf("Delta ma dwa rozwiazania.");

            int x1 = -b+ sqrt(delta)/(2*a);
            int x2 = -b- sqrt(delta)/(2*a);

            printf("Rozwiazanie x1 = %d\nRozwiazanie x2 = %d", x1,x2);
        }
    }
    return 0;
}


int main() {
    int a;
    int b;
    int c;

    printf("Podaj A: ");
    scanf("%d", &a);
    printf("Podaj B: ");
    scanf("%d", &b);
    printf("Podaj C: ");
    scanf("%d", &c);

    funkcja1(a,b);
}