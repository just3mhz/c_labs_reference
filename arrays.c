#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
    // Считали массив и вывели его
    int input_array[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        scanf("%d", &input_array[i]);
    }
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("%d ", input_array[i]);
    }
    printf("\n");

    // При такой инициализации можно не указывать размер массива
    int array[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Не инициализировали значения
    // В garbage будут лежать случайные значения
    int garbage[50];
    for (int i = 0; i < 50; ++i) {
        printf("%d", garbage[i]);
    }
}