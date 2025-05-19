#include <stdio.h>
#include <stdlib.h>

int ascii(char * napis1, char * napis2) {
    int i = 0;
    while (napis1[i] != 0) {
        if (napis1[i] >= napis2[i]) {
            return 0;
        }
        else {
            i++;
        }
    }
    return 1;
}

int main() {
    char napis1[] = "a";
    char napis2[] = "b";

    printf("%d\n", ascii(napis1, napis2));
    return 0;
}