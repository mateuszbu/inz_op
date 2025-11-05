#include <iostream>

int main() {
	int n;
	std::cout << "Podaj liczbę: ";
	std::cin >> n;

	if (n < 0) {
		std::cout << "Liczba jest ujemna." << std::endl;
		return 1;
	}

	std::cout << "Liczba: " << n << std::endl;
	return 0;
}
