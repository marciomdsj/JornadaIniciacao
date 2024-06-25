#include <stdio.h>
#include <stdbool.h>

int main() {
    int ch;
    bool open = true;

    while ((ch = getchar()) != EOF) {
        if (ch == '"') {
           
            if (open) {
                printf("``");
            } else {
                printf("''");
            }
            
            open = !open;
        } else {
            
            putchar(ch);
        }
    }

    return 0;
}