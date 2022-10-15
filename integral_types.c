#include <stdio.h>
#include <limits.h>

int main() {
    int max_char = CHAR_MAX;
    int min_char = CHAR_MIN;
    printf("%20s\t%20d\t%20d\n", "char", min_char, max_char);

    unsigned int max_unsigned_char = UCHAR_MAX;
    unsigned int min_unsigned_char = 0;
    printf("%20s\t%20u\t%20u\n", "unsigned char", min_unsigned_char, max_unsigned_char);

    int max_int = INT_MAX;
    int min_int = INT_MIN;
    printf("%20s\t%20d\t%20d\n", "int", min_int, max_int);

    unsigned int max_unsigned_int = UINT_MAX;
    unsigned int min_unsigned_int = 0;
    printf("%20s\t%20u\t%20u\n", "unsigned int", min_unsigned_int, max_unsigned_int);

    long max_long = LONG_MAX;
    long min_long = LONG_MIN;
    printf("%20s\t%20ld\t%20ld\n", "long", min_long, max_long);

    unsigned long max_unsigned_long = ULONG_MAX;
    unsigned long min_unsigned_long = 0;
    printf("%20s\t%20lu\t%20lu\n", "unsigned long", min_unsigned_long, max_unsigned_long);
}