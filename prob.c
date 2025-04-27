#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void win() {
    printf("You win!\n");
    system("/bin/sh");
}

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);

    char buf[64];

    printf("Input: ");

    gets(buf);

    return 0;
}
