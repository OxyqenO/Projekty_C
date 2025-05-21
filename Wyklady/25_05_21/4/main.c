#include <stdio.h>

struct Punkt3D {
    int x, y, z;
};

void przepisz (struct Punkt3D tab1[], struct Punkt3D tab2[], int n) {
    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[i];
    }
}
void wyswietl(){

}

int main(void) {
    printf("Hello, World!\n");
    return 0;
}