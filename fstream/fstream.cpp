#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <fstream>
#include <WINDOWS.H>


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));


	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string personsName00, personsName01, personsName02, personsName03;
	std::string personsCount00, personsCount01, personsCount02, personsCount03;
	std::string personsPrice00, personsPrice01, personsPrice02, personsPrice03;
	int end = 0;
	int choose = 1;

	std::ofstream name;
	name.open("name.txt", std::ofstream::app);
	std::ofstream count;
	count.open("count.txt", std::ofstream::app);
	std::ofstream price;
	price.open("price.txt", std::ofstream::app);

	if (!name.eof() && !count.eof() && !price.eof())
	{
		while (end != 11)
		{
			std::cout << "\nВ какой файл хотите записать данные?\n " <<
				"1 - название товара, 2 - количество, 3 - цена\n";
			std::cin >> choose;

			if (choose == 1)
			{
				getline(std::cin, personsName00);
				std::cout << "\nЗапишите название 1 товара: ";
				getline(std::cin, personsName01);
				std::cout << "Запишите название 2 товара: ";
				getline(std::cin, personsName02);
				std::cout << "Запишите название 3 товара: ";
				getline(std::cin, personsName03);

				std::cout << "\nПродолжть? 0 - да, 11 - нет \n";
				std::cin >> end;
			}
			else if (choose == 2)
			{
				getline(std::cin, personsCount00);
				std::cout << "\nЗапишите кол-во 1 товарa: ";
				getline(std::cin, personsCount01);
				std::cout << "Запишите кол-во 2 товарa: ";
				getline(std::cin, personsCount02);
				std::cout << "Запишите кол-во 3 товарa: ";
				getline(std::cin, personsCount03);

				std::cout << "\nПродолжть? 0 - да, 11 - нет \n";
				std::cin >> end;
			}
			else if (choose == 3)
			{
				getline(std::cin, personsPrice00);
				std::cout << "\nЗапишите цену 1 товара: ";
				getline(std::cin, personsPrice01);
				std::cout << "Запишите цену 2 товара: ";
				getline(std::cin, personsPrice02);
				std::cout << "Запишите цену 3 товара: ";
				getline(std::cin, personsPrice03);

				std::cout << "\nПродолжть? 0 - да, 11 - нет \n";
				std::cin >> end;
			}
			else
			{
				std::cout << "\nВы ввели что-то не то :( " << std::endl;
			}
		}

		if (!name.is_open())
		{
			std::cerr << "Error\n";
		}
		else
		{
			name << "\n" << personsName01 << "\n" <<
				personsName02 << "\n" << personsName03;
		}

		if (!count.is_open())
		{
			std::cerr << "Error\n";
		}
		else
		{
			count << "\n" << personsCount01 << "\n" <<
				personsCount02 << "\n" << personsCount03;
		}

		if (!price.is_open())
		{
			std::cerr << "Error\n";
		}
		else
		{
			price << "\n" << personsPrice01 << "\n" <<
				personsPrice02 << "\n" << personsPrice03;
		}
	}
	else
	{
		if (!name.is_open())
		{
			std::cerr << "Error\n";
		}
		else
		{
			name << "\n" << personsName01 << "\n" <<
				personsName02 << "\n" << personsName03;
		}

		if (!count.is_open())
		{
			std::cerr << "Error\n";
		}
		else
		{
			count << "\n" << personsCount01 << "\n" <<
				personsCount02 << "\n" << personsCount03;
		}

		if (!price.is_open())
		{
			std::cerr << "Error\n";
		}
		else
		{
			price << "\n" << personsPrice01 << "\n" <<
				personsPrice02 << "\n" << personsPrice03;
		}
	}

	//вывод на экран
	std::cout << "\nId    Название   Количество   Цена\n\n";

	for (int i = 0; i < 4; i++)
	{
		std::cout << 1 << ")    " << personsName01 << "    " << personsCount01 <<

			"   \t      " << personsPrice01 << "\n";
		std::cout << 2 << ")    " << personsName02 << "    " << personsCount02 <<
			"   \t      " << personsPrice02 << "\n";
		std::cout << 3 << ")    " << personsName03 << "    " << personsCount03 <<
			"   \t      " << personsPrice03 << "\n";
		break;
	}



	name.close();
	count.close();
	price.close();

	return 0;
}


