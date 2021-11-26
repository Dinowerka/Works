#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Welcome to the translator\n\n\n";
	cout << "Выберите действие:" << endl;
	cout << "[1]Русские слова" << endl;
	cout << "[2]Английские слова" << endl;
	cout << "[3]Выйти" << endl;
	int menu;
	int number;
	cin >> menu;
	system("cls");
	switch (menu) {
	case 1:
		cout << "Выберите номер слова:\n";
		cout << "[1]Еда\n[2]Лягушка\n[3]Волк\n[4]Машина\n[5]Кровать\n[6]Меч\n[7]Книга\n[8]Лес\n[9]Топливо\n[10]Дом\n[11]Окно\n[12]Захватывающий\n[13]Ручка\n[14]Карандаш\n[15]Река\n";
		cin >> number;
		system("cls");
		switch (number) {
		case 1:
			cout << "Еда-food";
			break;
		case 2:
			cout << "Лягушка-frog";
			break;
		case 3:
			cout << "Волк-wolf";
			break;
		case 4:
			cout << "Машина-car";
			break;
		case 5:
			cout << "Кровать-bed";
			break;
		case 6:
			cout << "Меч-sword";
			break;
		case 7:
			cout << "Книга-book";
			break;
		case 8:
			cout << "Лес-forest";
			break;
		case 9:
			cout << "Топливо-fuel";
			break;
		case 10:
			cout << "Дом-home";
			break;
		case 11:
			cout << "Окно-window";
			break;
		case 12:
			cout << "Захватывающий-Breathtaking";
			break;
		case 13:
			cout << "Ручка-pen";
			break;
		case 14:
			cout << "Карандаш-pencil";
			break;
		case 15:
			cout << "Река-river";
			break;
		default:
			cout << "Введен неправильный символ!";
			break;
		}
		break;
	case 2:
		cout << "Выберите номер слова:\n";
		cout << "[1]Food\n[2]Frog\n[3]Wolf\n[4]Car\n[5]Bed\n[6]Sword\n[7]Book\n[8]Forest\n[9]Fuel\n[10]Home\n[11]Window\n[12]Breathtaking\n[13]Pen\n[14]Pencil\n[15]River\n";
		cin >> number;
		system("cls");
		switch (number) {
		case 1:
			cout << "Food-еда";
			break;
		case 2:
			cout << "Frog-лягушка";
			break;
		case 3:
			cout << "Wolf-волк";
			break;
		case 4:
			cout << "Car-машина";
			break;
		case 5:
			cout << "Bed-кровать";
			break;
		case 6:
			cout << "Sword-меч";
			break;
		case 7:
			cout << "Book-книга";
			break;
		case 8:
			cout << "Forest-лес";
			break;
		case 9:
			cout << "Fuel-топливо";
			break;
		case 10:
			cout << "Home-дом";
			break;
		case 11:
			cout << "Window-окно";
			break;
		case 12:
			cout << "Breathtaking-захватывающий";
			break;
		case 13:
			cout << "Pen-ручка";
			break;
		case 14:
			cout << "Pencil-карандаш";
			break;
		case 15:
			cout << "River-река";
			break;
		default:
			cout << "Введен неправильный символ!";
			break;
		}
		break;

	case 3:
		cout << "Ну и не очень то и хотелось переводить";
		break;
	default:
		cout << "Вы промазали по нужной клавише";
		break;
	}
	return 0;
}