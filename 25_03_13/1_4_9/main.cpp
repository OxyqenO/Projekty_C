#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int m;

    int temp;

    scanf("%d %d", &n, &m);

    if (n<0 || m<0) {
        printf("Incorrect input\n");
    }

    if (m==n) {
        printf("Wspolny dzielnik to: %d", m);
    }
    else {
        if (n<m) {
            temp = n;
            while (m % temp != 0) {
                temp--;
            }
            if (n % temp != 0) {
                printf("Wspolny dzielnik to 1");
            }
            else {
                printf("Wspolny dzielnik to: %d", temp);
            }
        }
        else {
            temp = m;
            while (n % temp != 0) {
                temp--;
            }
            if (m % temp != 0) {
                printf("Wspolny dzielnik to 1");
            }
            else {
                printf("Wspolny dzielnik to: %d", temp);
            }
        }
    }
}