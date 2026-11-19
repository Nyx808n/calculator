#include "calculator.hpp"

void PrintNum(double number) {
	std::cout << number;
}

double multip(double f, double s) {
	double r = 0;
	r = f * s;
	return r;
}

double Sum(double f, double s) {
	double r = 0;
	r = f + s;
	return r;
}
double Minus(double f, double s) {
	double r = 0;
	r = f - s;
	return r;
}
double divide(double f, double s) {
	if (std::abs(s) <= std::numeric_limits<double>::epsilon()) {
		throw std::invalid_argument("h");
	}
	double r = 0;
	r = f / s;
	return r;
}

/*int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	char d = ' ';
	double f = 0;
	double s = 0;
	double r = 0;
	std::cout << "Введите действие: * | + | - | / \n";
	std::cin >> d;
	if (d == '*' || d == '/' || d == '+' || d == '-') {
		std::cout << "Выбрано" << "(" << d << ")" << "\n Введите первое число:";
		std::cin >> f;
		std::cout << "Первое число:" << f << "\n Введите второе число: \n";
		std::cin >> s;
		//std::cout << "Итог:" << r;
		if (d == '*') {
			multip(f, s);
			std::cout << "Итог:" << multip(f, s);
		}
		else if (d == '/' && s != 0) {
			std::cout << "Итог:" << divide(f, s);
		}
		else if (d == '+') {
			std::cout << "Итог:" << Sum(f, s);
		}
		else if (d == '-') {
			std::cout << "Итог:" << Minus(f, s);
		}
		else {
			std::cout << "Ты что понаписал?";
		}
		return 0;
	}
	else
	{
		std::cout << "Ты что понаписал?";
		std::cerr << "\n Logging";
		std::clog;
	}
}*/
