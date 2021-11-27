#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int menu;
	cout << "[0]INT\n[1]SHORT\n[2]LONG\n[3]FLOAT\n[4]DOUBLE\n[5]CHAR\n[6]BOOL\n[7]STRING\nВыберите массив:";
	cin >> menu;
	system("cls");

	if (menu == 0)
	{
		int intarr[10] = { 90,941,-4282,39035,4094,50,62,74,85,96 };
		for (int i = 0; i < 10; i++)
		{
			cout << "intarr[" <<i<< "] = " << intarr[i] << endl;
		}
	}
	else if (menu == 1)
	{
		short shortarr[10] = { 31888,-134,2409,3429,4492,542,64,7324,843,9432 };
		for (int i = 0; i < 10; i++)
		{
			cout << "shortarr[" <<i<< "] = " << shortarr[i] << endl;
		}
	}
	else if (menu == 2)
	{
		long longarr[10] = { 17426198,1,2327387,31241,4342,59589,64,-7,-824323,90 };
		for (int i = 0; i < 10; i++)
		{
			cout << "longarr[" <<i<< "] = " << longarr[i] << endl;
		}
	}
	else if (menu == 3)
	{
		float floatarr[10] = { 324,1234,54,654,45,34,564,453,343,543 };
		for (int i = 0; i < 10; i++)
		{
			cout << "floatarr[" <<i<< "] = " << floatarr[i] << endl;
		}
	}
	else if (menu == 4)
	{
		double doublearr[10] = { 324,1424,242342,35452,4959,5244,6234,7.5,8424,9234 };
		for (int i = 0; i < 10; i++)
		{
			cout << "doublearr[" <<i<< "] = " << doublearr[i] << endl;
		}
	}
	else if (menu == 5)
	{
		char chararr[10] = { 'f','-','+','f','ef','efw','fe','er','34','fef'};
		for (int i = 0; i < 10; i++)
		{
			cout << "chararr[" <<i<< "] = " << chararr[i] << endl;
		}
	}
	else if (menu == 6)
	{
		bool boolarr[10] = { true,false,0,1,0,0,1,0,1,0 };
		for (int i = 0; i < 10; i++)
		{
			cout << "boolarr[" <<i<<"] = " << boolarr[i] << endl;
		}
	}
	else if (menu == 7)
	{
		string stringarr[10] = { "gdg","d","2","fwsf","fs","fsf","op","sfes","sfs","fre"};
		for (int i = 0; i < 10; i++)
		{
			cout << "stringarr[" <<i<< "] = " << stringarr[i] << endl;
		}
	}
	else if (menu)
	{
		cout << "Выберите правильное значение";

	}
	return 8;
}