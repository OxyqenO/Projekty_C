#include <stdio.h>

enum Nazwa {WARTOSC_1, WARTOSC_2, WARTOSC_N};

enum Miasta {OLSZTYN, GDANSK, KRAKOW, WARSZAWA, BUGDOSZCZ};

int main(void) {
    enum Miasta l1=WARSZAWA;
    //printf("%s\n", l1);
    printf("%d\n", l1);
    printf("%u\n", l1);
    return 0;
}