#include<stdio.h>
#include<stdlib.h>

int factorial(int n) {
    int r = 1;
    for (int i = 1; i <= n; i++) {
        r = r * i;
    }
    return r;
}

int main(int argc, char *argv[]) {
    int start;
    int end;
        
    start = atoi(argv[1]);
    end = atoi(argv[2]);
        
    for (int i = start; i <= end; i++) {
        printf("%d! = %d\n", i, factorial(i));
    }

    return 0;
}
