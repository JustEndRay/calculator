#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;
void calculation_and_output(double x, char action, double y)
{

	if (action == '+')cout << "³������= " << x + y << endl;
	if (action == '-') cout << "³������= " << x - y << endl;
	if (action == '*') cout << "³������= " << x * y << endl;
	if (action == '/')
		if (y != 0) { cout << "³������= " << x / y << endl; }
		else { cout << "��������� �������� ������ �� ����" << endl; }

}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "��� ��� ����������� �������� ����� ��-11 ��������� �����" << endl;
	cout << "������ ��������� ������� � �����������:" << endl;
	cout << "���������   " << " '+'" << endl;
	cout << "³�������   " << "'-'" << endl;
	cout << "��������    " << " '*'" << endl;
	cout << "ĳ�����     " << " '/'" << endl;
	int i = 1;;

	while (i == 1)
	{
		double x, y;
		char a;
		cout << "������ ����� �����" << endl;
		cin >> x;
		cout << "������ �� �� �������" << endl;
		cin >> a;
		cout << "������ ����� �����" << endl;
		cin >> y;
		calculation_and_output(x, a, y);
		cout << "������ '1', ���� ������ �������� ����������, �� ������ '0', ���� ������ ��������� ��������." << endl;
		cin >> i;
	}
	return 0;
}