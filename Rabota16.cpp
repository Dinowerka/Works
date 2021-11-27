#include<iostream>
using namespace std;
void ClearConsole() {
	system("cls");
}
void ChangeConsoleBackground() {
	system("color F5");
}
void ChangeConsoleText() {
	system("color 9");
}
void WriteSizeOfInt() {
	cout << "Размер типа данных int - " << sizeof(int)<<" байт\n";
}
void WriteSizeOfChar() {
	cout << "Размер типа данных char - " << sizeof(char) << " байт\n";
}
void WriteSizeOfDouble() {
	cout << "Размер типа данных double - " << sizeof(double) << " байт\n";
}
void WriteSizeOfFloat() {
	cout << "Размер типа данных float - " << sizeof(float) << " байт\n";
}
void WriteSizeOfBool() {
	cout << "Размер типа данных bool - " << sizeof(bool) << " байт\n\n";
}
void WriteHello() {
	cout << "Привет я функция\n\n";
}
void PrintSquare5x5() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
}
int main() {
	setlocale(0, "");
	ClearConsole();
	ChangeConsoleBackground();
	ChangeConsoleText();
	WriteSizeOfInt();
	WriteSizeOfChar();
	WriteSizeOfDouble();
	WriteSizeOfFloat();
	WriteSizeOfBool();
	WriteHello();
	PrintSquare5x5();
		return 666;
}