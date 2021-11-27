#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Выберите месяц:"<<endl;
	cout<<"[1]Январь"<<endl;
	cout<<"[2]Февраль"<<endl;
	cout<<"[3]Март"<<endl;
	cout<<"[4]Апрель"<<endl;
	cout<<"[5]Май"<<endl;
	cout<<"[6]Июнь"<<endl;
	cout<<"[7]Июль"<<endl;
	cout<<"[8]Август"<<endl;
	cout<<"[9]Сентябрь"<<endl;
	cout<<"[10]Октябрь"<<endl;
	cout<<"[11]Ноябрь"<<endl;
	cout<<"[12]Декабрь"<<endl;
	int month;
	cin >> month;
		switch(month){
		case 1:
			cout << "Вы выбрали январь";
				break;
		case 2:
			cout << "Вы выбрали февраль";
			break;
		case 3:
			cout << "Вы выбрали март";
			break;
		case 4:
			cout << "Вы выбрали апрель";
			break;
		case 5:
			cout << "Вы выбрали май";
			break;
		case 6:
			cout << "Вы выбрали июнь";
			break;
		case 7:
			cout << "Вы выбрали июль";
			break;
		case 8:
			cout << "Вы выбрали август";
			break;
		case 9:
			cout << "Вы выбрали сентябрь";
			break;
		case 10:
			cout << "Вы выбрали октябрь";
			break;
		case 11:
			cout << "Вы выбрали ноябрь";
			break;
		case 12:
			cout << "Вы выбрали декабрь";
			break;
		default:
			cout << "Введите правильный номер месяца!";
			}
	return 0;
}
