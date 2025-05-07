#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int wyczysc(char* napis) {
    if (napis != NULL) {
        napis[0] = '\0';
    }
}

int main(void){
    char napis[] = "Ten napis ma zostac usuniety";
    printf("%s\n", wyczysc(napis));
    return 0;
}