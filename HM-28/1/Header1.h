#pragma once

template <typename T>
T max(T a, T b) {
	return a > b ? a : b;
}

// шаблон функції, яка заміняє ряд аналогічних різнотипних функцій
template <typename T>
T min(T a, T b) {
	return a < b ? a : b;
}

template <typename T>
T Suma(T a, T b) { return a + b; }

template <typename T, typename U>
T Suma(T a, U b) { return a + b; }

template <typename T>
void Change(T a, T b) {
	T tmp = a;
	a = b;
	b = tmp;
}

