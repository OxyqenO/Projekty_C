#include <stdio.h>
#include <stdlib.h>
int lenght(const char * txt) {
  int i = 0;
  while (txt[i]) {
    i++;
  }
  return i;
}

char * toLowerNew(const char * txt) {
  int d = lenght(txt);
  char * temp = malloc(sizeof(char) * (d + 1));
  for (int i = 0; i < d; i++) {
    temp[i] = txt[i];
    if ('A' <= txt[i] && txt[i] <= 'Z') {
      temp += ('a' - 'A');
    }
  }
  temp[d] = 0;
  return temp;
}

int main(){
  char t1[] = "ABCxyz123";
  printf("%s\n", t1);
  char * w1 = toLowerNew(t1);
  printf("%s\n", t1);
  printf("%s\n", w1);
  return 0;
}
