#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void win() {
    system("/bin/sh");
    puts("You Win!");
}

int main(int argc, char *argv[]) {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    printf("Welcome! Try to exploit the buffer overflow.\n");
    printf("Address of win() function: %p\n", win);

    char buffer[64];

    printf("Input: ");
    gets(buffer);

    return 0;
}
