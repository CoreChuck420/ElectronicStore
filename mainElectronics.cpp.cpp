// mainElectronics.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Consumer.h"
#include "Portable.h"
#include "speaker.h"
#include <iostream>
using namespace std;
int main()
{
	IElectronics* item[5];
	item[0] = new Microwave(10000, 800); // микроволновка, стоимость 10000 рублей, мощность 800 Вт
	item[1] = new Stove(12000, 4); //плита, стоимость 12000 рублей, 4 конфорки
	item[2] = new Camera(string("Sony"), 48); //фотокамера Sony, 48 мегапикселей
	item[3] = new Tablet(string("Apple"), 12); //планшет apple, диагональ 12 дюймов
	item[4] = new Speaker (8000, string("JBL"));//колонка JBL, стоимость 8000 рублей
		
		bool open = true;
		while (open)
		{
			cout << "Choose item: 1 - Microwave, 2 - Stove, 3 - Camera, 4 - Tablet, 5 - Speaker, 0 - exit " << endl;

			int choice;
			cin >> choice;
			switch (choice)
			{
			case 1:
				item[0]->Show();
				break;
			case 2:
				item[1]->Show();
				break;
			case 3:
				item[2]->Show();
				break;
			case 4:
				item[3]->Show();
				break;
			case 5:
				item[4]->Show();
				break;

			case 0:
				open = false;
				break;
			default:
				cout << "Choose item from 1 to 5, or 0 to exit" << endl;
				break;
			}
		}
		delete item[0];
		delete item[1];
		delete item[2];
		delete item[3];
		delete item[4];
		

		return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
