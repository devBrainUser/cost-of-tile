#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int cost, widht, length;

	cout << "������� ���� ������ �� 1 ���������� ����:";
	cin >> cost;
	cout << endl;

	cout << "������� ������ �������� � ������:";
	cin >> widht;
	cout << endl;

	cout << "������� ����� �������� � ������:";
	cin >> length;
	cout << endl;

	cout << (widht * length) * cost;
}