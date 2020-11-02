#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;
void calculation_and_output(double x, char action, double y)
{

	if (action == '+')cout << "Відповідь= " << x + y << endl;
	if (action == '-') cout << "Відповідь= " << x - y << endl;
	if (action == '*') cout << "Відповідь= " << x * y << endl;
	if (action == '/')
		if (y != 0) { cout << "Відповідь= " << x / y << endl; }
		else { cout << "Неможливо виконати ділення на нуль" << endl; }

}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Вас вітає калькулятор студента групи ІК-11 Пастушука Андрія" << endl;
	cout << "Список доступних функцій у калькуляторі:" << endl;
	cout << "Додавання   " << " '+'" << endl;
	cout << "Віднімання   " << "'-'" << endl;
	cout << "Множення    " << " '*'" << endl;
	cout << "Ділення     " << " '/'" << endl;
	int i = 1;;

	while (i == 1)
	{
		double x, y;
		char a;
		cout << "Введіть перше число" << endl;
		cin >> x;
		cout << "Введіть дію між числами" << endl;
		cin >> a;
		cout << "Введіть друге число" << endl;
		cin >> y;
		calculation_and_output(x, a, y);
		cout << "Введіть '1', якщо хочете провести обчислення, та введіть '0', якщо хочете завершити програму." << endl;
		cin >> i;
	}
	return 0;
}