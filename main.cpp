#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int cost, widht, length;

	cout << "¬ведите цену плитки за 1 квадратный метр:";
	cin >> cost;
	cout << endl;

	cout << "¬ведите ширину квадрата в метрах:";
	cin >> widht;
	cout << endl;

	cout << "¬ведите длину квадрата в метрах:";
	cin >> length;
	cout << endl;

	cout << (widht * length) * cost;
}