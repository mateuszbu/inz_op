#include <iostream>

unsigned int fibonacci(unsigned int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	unsigned int n;
	std::cout << "Podaj liczbę: ";
	std::cin >> n;
	std::cout << "Liczba: " << n << std::endl;
	std::cout << "Fibonacci: " << fibonacci(n) << std::endl;
	return 0;
}
