#include <stdio.h>

int main() {
  int piket;
  int i;
  printf("jepni piket tuaja (1) A (2) B (3) C (4) D (5) E \n");
  printf("piket tuaja jane=");
  scanf("%d,&piket");
  switch (piket) {
  case 1:
    for (i = 90; i <= 100; i++) {

      printf("Nota juaj eshte A");
    }
    break;

  case 2:
    for (i = 80; i <= 89; i++) {
      printf("Nota juaj eshte B");
    }
    break;
  case 3:
    for (i = 70; i <= 79; i++) {
      printf("Nota juaj eshte C");
    }
    break;
  case 4:
    for (i = 60; i = 69; i++) {
      printf("Nota juaj eshte D");
    }
    break;
  case 5:
    for (i = 0; i = 59; i++) {
      printf("Nota juaj eshte E");
    }
    break;
  }
  return 0;
}
