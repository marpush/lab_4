#include <iostream>
#include <cmath>

using namespace std;
#define BORDER 6

double scan_double_number();
void calculates_exponent(const double argument);
int calculates_factorial(const double number);


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Данная программа вычисляет экспоненту в введенной точке\n";
	cout << "Введите аргумент функции: ";
	double x = scan_double_number();
	calculates_exponent(x);
}

double scan_double_number()
{
	while (true) {
		double number = 0;
		cin >> number;

		if (cin.fail()) {
			cout << "Введенный символ не число.\n";
			cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else {
				return number;
		}
	}
}

void calculates_exponent(const double argument)
{
	double exp = 0;
	for (int index = 0; index < BORDER; index++) {
		exp = (pow(argument, index) / calculates_factorial(index)) + exp;
	}
	cout << "Значение экспоненты равно: " << exp;
}

int calculates_factorial(const double number) {
	int factorial = 1, index;
	for (index = 1; index <= number; index++) {
		factorial = index * factorial;
	}
	return factorial;
}
