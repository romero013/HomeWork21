#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double n, m;
	cout << "Домашнее задание 21.\nВведите два числа: ";
	cin >> n >> m;
	double* pn = &n;
	double* pm = &m;
	cout << "Среднее арифметическое значение чисел " << n << " и " << m << " = " << (*pn + *pm) / 2 << endl;


	return 0;
}