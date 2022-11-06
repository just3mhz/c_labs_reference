#include <stdio.h>
#include <assert.h> // Для функции assert

// Объявления функций

int f1(int x) {
	return x * x;
}

int f2(int x, int y) {
	return x * y;
}

void testAll();

int main() {
	// Запуск тестов
	testAll();
	// Основной код программы
	printf("%d\n", f1(f2(4, 5)));
}

void testAll() {
	// Тесты для f1
	assert(f1(0) == 0);
	assert(f1(1) == 1);
	assert(f1(2) == 4);
	assert(f1(-2) == 4);

	// Тесты для f2
	assert(f2(0, 1) == 0);
	assert(f2(1, 0) == 0);
	assert(f2(2, 4) == 8);
	assert(f2(4, 2) == 9); // Здесь программа упадет
}
