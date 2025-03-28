#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double *pc = malloc(sizeof(double));
    printf("%p",&pc);

    return 0;
}