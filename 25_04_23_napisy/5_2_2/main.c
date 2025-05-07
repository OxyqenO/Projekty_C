#include <stdio.h>

// Wersja dla char
int dlugosc_char(const char* napis) {
    int len = 0;
    if (napis != NULL) {
        while (napis[len] != '\0') {
            len++;
        }
    }
    return len;
}

// Wersja dla wchar_t
/*
int dlugosc_wchar(const wchar_t* napis) {
    int len = 0;
    if (napis != NULL) {
        while (napis[len] != L'\0') {
            len++;
        }
    }
    return len;
}
*/

int main(void){
    char napis[] = "Ten napis ma dana dlugosc";
    printf("%d\n", dlugosc_char(napis));
    return 0;
}
