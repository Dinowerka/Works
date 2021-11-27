#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Выберите операцию" << endl;
	cout << "[-]Вычесть" << endl;
	cout << "[+]Сложить" << endl;
	cout << "[*]Умножить" << endl;
	cout << "[/]Делить" << endl;
	cout << "[%]Делить с остатком" << endl;
	char menu;
	cin >> menu;
	int number1;
	int number2;
	if (menu == '-') {
		cout << "Введите первое число" << endl;
		cin >> number1;
		cout << "Введите второе число" << endl;
		cin >> number2;
		cout << number1 << '-' << number2 << "=" << number1 - number2;
	}
	else if (menu == '+') {
		cout << "Введите первое число" << endl;
		cin >> number1;
		cout << "Введите второе число" << endl;
		cin >> number2;
		cout << number1 << '+' << number2 << "=" << number1 + number2;
}
	else if (menu == '*') {
		cout << "Введите первое число" << endl;
		cin >> number1;
		cout << "Введите второе число" << endl;
		cin >> number2;
		cout << number1 << '*' << number2 << "=" << number1 * number2;
	}

	else if (menu == '/')
	{
			cout << "Введите первое число" << endl;
			cin >> number1;
			cout << "Введите второе число" << endl;
			cin >> number2;
			if (number2 == 0) {
				cout << "Делить на ноль нельзя";
			} else {
				cout << number1 << '/' << number2 << "=" << number1 / number2;
			}

	}

	else if (menu == '%') {
		cout << "Введите первое число" << endl;
		cin >> number1;
		cout << "Введите второе число" << endl;
		cin >> number2;
		cout << number1 << '%' << number2 << "=" << number1 % number2;
	}
	else {
		cout << "Введено неправильное значение" << endl;
	}

return 0;
}



