#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_BUFFER_SIZE 100
#define NUMBER '0'

#define ASSERT(condition, message)          \
    do {                                    \
        if (!condition) {                   \
            fprintf(stderr, "%s", message); \
            exit(-1);                       \
        }                                   \
    } while(false)                          \

#define MAX_STACK_DEPTH 100

int get_term(char[]);

void push(double);

double pop();

int main() {
    int type;
    char s[MAX_BUFFER_SIZE];
    while ((type = get_term(s)) != EOF) {
        double second_operand;
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '-':
                second_operand = pop();
                push(pop() - second_operand);
                break;
            case '*':
                push(pop() * pop());
                break;
            case '/':
                second_operand = pop();
                push(pop() / second_operand);
                break;
            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                ASSERT(false, "Unknown operation");
}
}
}

int stack_pos = 0;
double stack[MAX_STACK_DEPTH];

void push(double value) {
    ASSERT((stack_pos < MAX_STACK_DEPTH), "Stack overflow detected");
    stack[stack_pos++] = value;
}

double pop() {
    ASSERT((stack_pos > 0), "Pop from empty stack");
    return stack[--stack_pos];
}

int get_term(char buffer[]) {
    int c;
    while ((buffer[0] = c = getc(stdin)) == ' ' || c == '\t');
    buffer[1] = '\0';

    if (!isdigit(c) && c != '.') {
        return c;
    }

    int i = 0;
    if (isdigit(c)) {
        while (isdigit(buffer[++i] = c = getc(stdin)));
    }

    if (c == '.') {
        while (isdigit(buffer[++i] = c = getc(stdin)));
    }

    buffer[i] = '\0';

    if (c != EOF) {
        ungetc(c, stdin);
    }

    return NUMBER;
}


