#include <stdio.h>
#include <ctype.h>  


void invertcase(char *s) {
    while (*s) {
        if (isupper(*s)) {
            *s = tolower(*s);
        } else if (islower(*s)) {
            *s = toupper(*s);
        }
        s++;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: invertcase <string>\n");
        return 1;
    }

    invertcase(argv[1]);
    printf("%s\n", argv[1]);

    return 0;
}
