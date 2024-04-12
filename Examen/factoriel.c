  #include <stdio.h>

int factorial(int n) {
  if (n < 0) 
    return -1;

  int result = 1;
  for(int i=1; i<=n; i++) {
    result *= i;
  }

  return result;
}

int main() {

  int start, end;

  printf("Enter first number : ");
  scanf("%d", &start);

  printf("Enter last number : ");  
  scanf("%d", &end);

  for(int i=start; i<=end; i++) {
    int fact = factorial(i);
    printf("%d! = %d\n", i, fact);
  }

  return 0;
}

