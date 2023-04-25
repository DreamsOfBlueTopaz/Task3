#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Вычисление стоимости покупки" << endl;
	cout << "Введите исходные данные" << endl;
	double price_of_notebook;
	double price_of_cover;
	int number_of_set;
	cout << "Цена тетради: "; cin >> price_of_notebook;
	cout << "Цена обложки: "; cin >> price_of_cover;
	cout << "Количество комплектов: "; cin >> number_of_set;
	double total_price = (price_of_notebook + price_of_cover) * number_of_set;
	cout << "Стоимость покупки: " << total_price << " руб." << endl;


}