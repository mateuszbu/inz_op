#include <iostream>

unsigned int fibonacci(unsigned int n) {
	if (n == 0 || n == 1) {
		return n;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n;
	std::cout << "Podaj liczbę: ";
	std::cin >> n;

	if (n < 0) {
		std::cout << "Liczba jest ujemna." << std::endl;
		return 1;
	}

	std::cout << "Liczba: " << n << std::endl;
	std::cout << "Fibonacci: " << fibonacci(n) << std::endl;
	return 0;
}
