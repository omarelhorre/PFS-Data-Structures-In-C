#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Hello, World!\n");
    return 0;
}

void hashage() {
    // Fonction de hachage simple (exemple)
    const char *str = "example";
    unsigned long hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    printf("Hash: %lu\n", hash);
}