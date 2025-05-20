//7.2.3
//Zdefiniuj strukturę punkt służącą do przechowywania współrzędnych punktów w trójwymiarowej przestrzeni kartezjańskiej.
//Napisz funkcję, która otrzymuje jako argumenty tablicę tab o argumentach typu struct punkt oraz jej rozmiar, i zwraca jako wartość
//najmniejszą spośród odległości pomiędzy punktami przechowywanymi w tablicy tab. Zakładamy, że otrzymana w argumencie tablica
//ma co najmniej dwa argumenty.

#include <stdio.h>
#include <math.h>
#include <float.h>  // dla DBL_MAX

// Struktura punktu
struct punkt {
    double x;
    double y;
    double z;
};

// Funkcja licząca najmniejszą odległość między parami punktów
double najmniejsza_odleglosc(struct punkt tab[], int n) {
    double min_odleglosc = DBL_MAX; // największa możliwa wartość double

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double dx = tab[i].x - tab[j].x;
            double dy = tab[i].y - tab[j].y;
            double dz = tab[i].z - tab[j].z;
            double d = sqrt(dx * dx + dy * dy + dz * dz);

            if (d < min_odleglosc) {
                min_odleglosc = d;
            }
        }
    }

    return min_odleglosc;
}

int main() {
    int n;
    printf("Ile punktow chcesz podac? (minimum 2): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Musisz podac przynajmniej dwa punkty!\n");
        return 1;
    }

    struct punkt tab[n];

    // Wczytywanie punktów
    for (int i = 0; i < n; i++) {
        printf("Podaj wspolrzedne punktu %d (x y z): ", i + 1);
        scanf("%lf %lf %lf", &tab[i].x, &tab[i].y, &tab[i].z);
    }

    // Obliczenie i wypisanie najmniejszej odległości
    double min_d = najmniejsza_odleglosc(tab, n);
    printf("Najmniejsza odleglosc miedzy punktami wynosi: %.4lf\n", min_d);

    return 0;
}