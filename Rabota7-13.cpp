#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Геометрические фигуры:\n";
	cout << "[1]Линия\n";
	cout << "[2]Квадрат\n";
	cout << "[3]Прямоугольник\n";
	cout << "[4]Треугольник\n";
	cout << "[5]Решетка\n";
	cout << "[6]Крест\n";
	cout << "[7]Плюс\n";
	cout << "Выберите фигуру:";
	int length;
	char texture;
	int result;
	short menu;
	cin >> menu;
	system("cls");
	switch (menu)
	{
	case 1: {
		int direction;
		cout << "Фигура:Линия\n\n";
		cout << "[1]Горизонтальная\n";
		cout << "[2]Вертикальная\n";
		cout << "Выберите линию:";
		cin >> direction;
		system("cls");
		cout << "Длина линии:";
		cin >> length;
		cout << "Текстура линии:";
		cin >> texture;
		system("cls");
		int i = 0;
		switch (direction)
		{
		case 1:
			while (i < length)

			{
				i++;
				cout << texture;
			}
			break;

		case 2:
			while (i < length)
			{
				i++;
				cout << texture << endl;
			}
			break;

		default:
			cout << "Введено неправильное значение";
			break;
		}
		break;
	}
	case 2: {
		cout << "[1]Заполненный\n[2]Пустой\n";
		cin >> menu;
		system("cls");
		cout << "Введите размер:";
		cin >> length;
		cout << "Текстура линии:";
		cin >> texture;
		switch (menu)
		{
		case 1:
			for (int i = 0; i < length; i++)
			{

				for (int j = 0; j < length; j++)
				{
					cout << ' ' << texture;
				}
				cout << endl;
			}
			break;
		case 2:
			for (int y = 0; y < length; y++)
			{
				for (int x = 0; x < length; x++)
				{
					if (y == 0 || x == 0 || y == length - 1 || x == length - 1)
					{

						cout << " " << texture;
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		default:
			cout << "Введено неправильное значение";
			break;
		}
	}
		  break;

	case 3:
		int height;
		cout << "[1]Заполненный\n[2]Пустой\n";
		cin >> menu;
		system("cls");
		cout << "Введите ширину:";
		cin >> length;
		cout << "Введите высоту:";
		cin >> height;
		cout << "Введите текстуру:";
		cin >> texture;
		switch (menu)
		{
		case 1:
			for (int y = 0; y < height; y++)
			{
				for (int x = 0; x < length; x++)
				{
					cout << " " << texture;

				}
				cout << endl;
			}
			break;
		case 2:
			for (int y = 0; y < height; y++)
			{
				for (int x = 0; x < length; x++)
				{
					if (y == 0 || x == 0 || y == height - 1 || x == length - 1)
					{

						cout << " " << texture;
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		default:cout << "Введено неправильное значение";
			break;
		}

		break;

	case 4: {
		int height;

		cout << "Фигура:треугольник\n";

		while (true) {
			cout << "Укажите высоту треугольника.\n\nВысота треугольника: ";
			cin >> height;
			if (height < 1) {
				cin.clear();
				cin.ignore();
				cout << "\nНеправильный размер\n\n";
			}
			else {
				break;
			}
		}

		int size = 2 * (height - 1) + 1;

		cout << "\nУкажите текстуру треугольника\n\nТекстура треугольника: ";
		cin >> texture;

		int isFull;

		while (true) {
			cout << "\nПолный ли треугольник?\n\n[1]Да\n[2]Нет\n\nВвод: ";
			cin >> isFull;
			if (isFull < 1 || isFull > 2) {
				cin.clear();
				cin.ignore();
				cout << "Ошибка\n\n";
			}
			else {
				break;
			}
		}

		system("cls");

		switch (isFull) {
		case 1: {
			for (int i = 1; i <= height; i++) {
				for (int j = 0; j < size; j++) {
					if (j <= size / 2 - i || j >= size / 2 + i) {
						cout << "  ";
					}
					else {
						cout << texture << " ";
					}
				}
				cout << "\n";
			}
			break;
		}

		case 2: {
			for (int i = 0; i < height; i++) {
				for (int j = 0; j < size; j++) {
					if (j == size / 2 - i || j == size / 2 + i || i == height - 1) {
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << "\n";
			}
			break;
		}
		}
		break;
	}
	case 5: {
		int size;

		cout << "Фигура:решетка\n";

		while (true) {
			cout << "Укажите  размер решетки.\n\nРазмер решетки: ";
			cin >> size;

			if (size < 1 || size % 2 == 0) {
				cin.clear();
				cin.ignore();
				cout << "\nУказаны некорректные данные\n\n";
			}
			else {
				break;
			}
		}

		cout << "\nУкажите текстуру решетки.\n\nТекстура квадрата: ";
		cin >> texture;

		system("cls");

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i % 2 == 1 || j % 2 == 1) {
					cout << texture << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}

		break;

	}
	case 6: {
		int size;

		cout << "Фигура:крест\n";

		while (true) {
			cout << "Укажите размер крестика.\n\nРазмер крестика: ";
			cin >> size;

			if (size < 1) {
				cin.clear();
				cin.ignore();
				cout << "Введены некорректные данные\n\n";
			}
			else {
				break;
			}
		}

		cout << "\nУкажите текстуру крестика.\n\nТекстура крестика: ";
		cin >> texture;

		system("cls");

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i == j || size - 1 - j == i) {
					cout << texture << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}
		break;
	}
	case 7: {
		int size;

		cout << "Фигура:плюс\n";

		while (true) {
			cout << "Укажите размер плюса.\n\nРазмер плюса: ";
			cin >> size;

			if (size < 1 || size % 2 == 0) {
				cin.clear();
				cin.ignore();
				cout << "\nВведены некорректные данные\n\n";
			}
			else {
				break;
			}
		}

		cout << "\nУкажите текстуру плюса.\n\nТекстура плюса: ";
		cin >> texture;

		system("cls");

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (size / 2 == i || size / 2 == j) {
					cout << texture << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}
		break;
	}

	}

}