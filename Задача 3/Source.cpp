#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "���������� ��������� �������" << endl;
	cout << "������� �������� ������" << endl;
	double price_of_notebook;
	double price_of_cover;
	int number_of_set;
	cout << "���� �������: "; cin >> price_of_notebook;
	cout << "���� �������: "; cin >> price_of_cover;
	cout << "���������� ����������: "; cin >> number_of_set;
	double total_price = (price_of_notebook + price_of_cover) * number_of_set;
	cout << "��������� �������: " << total_price << " ���." << endl;


}