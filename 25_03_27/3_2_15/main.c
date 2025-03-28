#include <stdio.h>

/*
Napisz funkcję, która dostaje dwa argumenty: wskaźnik na stałą
typu int i wskaźnik na zmienną typu int, i przepisuje zawartość sta-
łej wskazywanej przez pierwszy argument do zmiennej wskazywanej
przez drugi argument.
*/

void przepisz(const int *a , int *b ) {
    *b = *a;
}

int main() {
    int a = 10;
    int b = 20;

    przepisz(&a, &b);
    printf("%d\n", b);
    return 0;
}