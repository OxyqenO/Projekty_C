#include <stdio.h>

union Liczba {
    int a;
    float b;
};

struct Dane {
    int tp;
    union Liczba zaw;
};
struct Dane{
}
struct Dane wczytaj();

int main(void) {
    struct Dane temp;
    printf("Hello, World!\n");
    return 0;
}