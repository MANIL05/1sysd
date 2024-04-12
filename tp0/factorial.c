#include <stdio.h>

int factorial(int n) {
  

  if (n < 0) {
    return 1;  
  } else if (n == 0) {
    return 1;  
  } else {
    return n * factorial(n - 1);  
  }
}

int main() {
  int number;

  printf("Entrez un nombre entier non négatif: ");
  scanf("%d", &number);

  int result = factorial(number);

  if (result == -1) {
    printf("La factorielle de nombres négatifs n'est pas définie.\n");
  } else {
    printf("La factorielle de %d est %d\n", number, result);
  }

  return 0;
}
