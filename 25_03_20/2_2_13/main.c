#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//nie działa poprawnie
//przy dużych liczbach wogole nie podaje cyfr

int funkcja(int n) {
    int temp = 1;
    int a = n - temp;
    int b;
    int ap;
    int bp;
    while (temp < (n/2)) {
        a = n - temp;
        b = temp;
        temp++;
        ap = sqrt(a);
        bp = sqrt(b);
        if (((ap*ap)+(bp*bp)) == n) {
            printf("%d^2 + %d^2 = %d\n", ap ,bp, n);
        }

    }
}

int main(){
    int x;
    printf("Podaj liczbe n: ");
    scanf("%d", &x);
    if (x < 0) {
        printf("Podano liczbe ujemna.\n");
    }
    else {
        funkcja(x);
    }
}

