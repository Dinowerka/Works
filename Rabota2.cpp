#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Выберите время года:\n\n";
	cout << "[1]Лето\n";
	cout << "[2]Осень\n";
	cout << "[3]Зима\n";
	cout << "[4]Весна\n";
	cout << "Ваш выбор:";
	int menu;
	cin >> menu;
	system("cls");
	if (menu == 1)
		cout << "Сейчас жаркое лето, стоит надеть головной убор";
	else if (menu == 2) {
		cout << "Сейчас депрессивная осень, стоит держаться близ второй половинки";
	}
	else if (menu == 3) {
		cout << "Сейчас зима, стоит насладиться битвой снежками";
	}
	else if (menu == 4) {
		cout << "Сейчас весна, стоит смотреть под ноги";
	}
	else {
		cout << "Выберите правильное значение";
	}
return 666;
}


