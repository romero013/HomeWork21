#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double n, m;
	cout << "�������� ������� 21.\n������� ��� �����: ";
	cin >> n >> m;
	double* pn = &n;
	double* pm = &m;
	cout << "������� �������������� �������� ����� " << n << " � " << m << " = " << (*pn + *pm) / 2 << endl;


	return 0;
}