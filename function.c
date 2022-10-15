#include <stdio.h>

void print_message(char* message) {
    printf("%s\n", message);
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    print_message("Hello!\n");
    printf("2 + 3 = %d\n", sum(2, 3));
}