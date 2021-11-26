#include <iostream>
using namespace std;
int main() {
setlocale(0, "");
cout << "--Календарь--\n\n";
cout << "[1]Январь\n";
cout << "[2]Февраль\n";
cout << "[3]Март\n";
cout << "[4]Апрель\n";
cout << "[5]Май\n";
cout << "[6]Июнь\n";
cout << "[7]Июль\n";
cout << "[8]Авуст\n";
cout << "[9]Сентябрь\n";
cout << "[10]Октябрь\n";
cout << "[11]Ноябрь\n";
cout << "[12]Декабрь\n\n";
cout << "Выберите месяц:";
int month, day;
int febraury = 2;
cin >> month;
cout << "Выберите день месяца:";
system("cls");
switch (month) {
case 1:
	cout << "Выбран месяц - Январь";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
		cout <<"Календарь: " << day << " января";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
case 2:
	cout << "Выбран месяц - Февраль";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
		cout << "Календарь: " << day << " февраля";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
case 3:
	cout << "Выбран месяц - Март";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
		cout << "Календарь: " << day << " марта";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
case 4:
	cout << "Выбран месяц - Апрель";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		cout << "Календарь: " << day << " апреля";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
case 5:
	cout << "Выбран месяц - Май";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
		cout << "Календарь: " << day << " мая";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
case 6:
	cout << "Выбран месяц - Июнь";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		cout << "Календарь: " << day << " июня";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
case 7:
	cout << "Выбран месяц - Июль";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
		cout << "Календарь: " << day << " июля";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
case 8:
	cout << "Выбран месяц - Август";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
		cout << "Календарь: " << day << " августа";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
case 9:
	cout << "Выбран месяц - Сентябрь";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		cout << "Календарь: " << day << " сентября";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
case 10:
	cout << "Выбран месяц - Октябрь";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
		cout << "Календарь: " << day << " октября";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
case 11:
	cout << "Выбран месяц - Ноябрь";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		cout << "Календарь: " << day << " ноября";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
case 12:
	cout << "Выбран месяц - Декабрь";
	cout << "\nВыберите день: ";
	cin >> day;
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
		cout << "Календарь: " << day << " декабря";
		break;
	default:
		cout << "Выберите правильное  число";
	}

	break;
default:
	cout << "В году 12 месяцев!!";
}
return 666;
}
