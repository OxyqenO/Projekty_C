//7.2.16
#include <stdio.h>
#include <string.h>

enum stan_polaczenia {
    POLACZENIE_NAWIAZANE,
    POLACZENIE_NIENAWIAZANE,
    POLACZENIE_W_TRAKCIE_NAWIAZYWANIA
};

struct komputer {
    char IP[16];  // max 15 znaków + null
    enum stan_polaczenia stan;
    char nazwa_uzytkownika[50];
};

void wyswietl_komputer(struct komputer k) {
    printf("Komputer:\n");
    printf("  IP: %s\n", k.IP);
    printf("  Uzytkownik: %s\n", k.nazwa_uzytkownika);
    printf("  Stan polaczenia: ");
    switch(k.stan) {
        case POLACZENIE_NAWIAZANE:
            printf("nawiazane\n");
        break;
        case POLACZENIE_NIENAWIAZANE:
            printf("nienawiazane\n");
        break;
        case POLACZENIE_W_TRAKCIE_NAWIAZYWANIA:
            printf("w trakcie nawiazywania\n");
        break;
        default:
            printf("nieznany\n");
    }
}

int main() {
    struct komputer moj_komputer;

    strcpy(moj_komputer.IP, "192.168.1.100");
    moj_komputer.stan = POLACZENIE_W_TRAKCIE_NAWIAZYWANIA;
    strcpy(moj_komputer.nazwa_uzytkownika, "Anna Kowalska");

    wyswietl_komputer(moj_komputer);

    return 0;
}