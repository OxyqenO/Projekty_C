#include <stdio.h>

/*
   Napisz funkcje calculate, która przyjmuje dwa argumenty: wskaźnik na funkcję operation
   oraz liczbę całkowitą typu int. Funkcja calculate powinna wywołać funkcję operation z argumentem number
    i zwrócić jej wynik. Stwórz przypadek testowy.
*/

calculate(int (*operation)(int a), int number) {
    return operation(number);

}

int square(int a) {
    return a * a;
}

int cube(int a) {
    return a * a * a;
}

/*
    Stwórz funkcję applyCondition, która przyjmuje trzy argumenty: wskaźnik na fukcję condition
    zwracającą wartość typu int i przyjmującą int, wskaźnik ma funkcję action również przyjmująca
    i zwracającą int, oraz wartość całkowitą value. Funkcja appyCondition powinnanajpierw wywołać
    condition z value jako argumentem. Jeśli wynik to 1, applyCOndition powinna następnie wywołać
    action na value i zwrócić wynik. W przeciwnym wypadku powinna zwrócić value bez zmian.
*/

int applyCondition(int (*condition)(int), int (* action)(int), int value) {
    int result = condition(value);
    if (result == 1) {
        return action(value);
    }
    return value;
}

int cond(int x) {
    return x%2;
}

int shift(int x) {
    return x+10;
}

int main() {
    //Zadanie 1
    printf("%d\n", calculate(square, 7));
    printf("%d\n", calculate(cube, 3));
    printf("\n");

    //Zadanie2
    printf("%d\n", applyCondition(cond, shift, 7));
    printf("%d\n", applyCondition(cond, shift, 4));
    printf("%d\n", applyCondition(cond, shift, -8));

    return 0;
}

