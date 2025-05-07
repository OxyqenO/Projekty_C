#include <stdio.h>

// Wersja dla char
int porownaj_leks_char(const char* napis1, const char* napis2) {
    if (napis1 == NULL || napis2 == NULL) {
        return 0;
    }

    int i = 0;
    while (napis1[i] != '\0' && napis2[i] != '\0') {
        if (napis1[i] < napis2[i]) {
            return 1;
        } else if (napis1[i] > napis2[i]) {
            return 0;
        }
        i++;
    }

    return (napis1[i] == '\0' && napis2[i] != '\0');
}

// Wersja dla wchar_t
/*
int porownaj_leks_wchar(const wchar_t* napis1, const wchar_t* napis2) {
    if (napis1 == NULL || napis2 == NULL) {
        return 0;
    }

    int i = 0;
    while (napis1[i] != L'\0' && napis2[i] != L'\0') {
        if (napis1[i] < napis2[i]) {
            return 1;
        } else if (napis1[i] > napis2[i]) {
            return 0;
        }
        i++;
    }

    return (napis1[i] == L'\0' && napis2[i] != L'\0');
}
*/

int main(void){
    char napis1[] = "Ten napis ma zostac usuniet";
    char napis2[] = "Ten napis ma zostac usuniety";

    printf("%d\n", porownaj_leks_char(napis1, napis2));
    return 0;
}