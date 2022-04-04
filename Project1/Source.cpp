#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

void firstTask();
void secondTask();
void individualTask();
void additionalTask();

void main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	while (true)
	{

		cout << "\t\t\t/////      /////  ////////  //////     ///  ///      ///\n";
		cout << "\t\t\t//////    //////  ////////  //////     ///  ///      ///\n";
		cout << "\t\t\t///  //////  ///  ///       /// ///    ///  ///      ///\n";
		cout << "\t\t\t///   ////   ///  //////    ///  ///   ///  ///      ///\n";
		cout << "\t\t\t///          ///  //////    ///   ///  ///  ///      ///\n";
		cout << "\t\t\t///          ///  ///       ///    /// ///  ///      ///\n";
		cout << "\t\t\t///          ///  ////////  ///     //////  ///      ///\n";
		cout << "\t\t\t///          ///  ////////  ///      /////  ////////////\n";
		cout << "\t\t\t--------------------------------------------------------\n";


		cout << "\t\t\t\t\t|1)Задание 1             |\n\t\t\t\t\t|2)Задание 2             |\n\t\t\t\t\t" <<
			"|3)Индивидуальное задание|\n\t\t\t\t\t|4)Дополнительное задание|\n\t\t\t\t\t---------------" <<
			"-----------\n\t\t\t\t\tВыбор: ";
		int menuChoice; cin >> menuChoice;

		switch (menuChoice)
		{
		case(1): { std::system("cls"); firstTask();      break; }
		case(2): { std::system("cls"); secondTask();     break; }
		case(3): { std::system("cls"); individualTask(); break; }
		case(4): { std::system("cls"); additionalTask(); break; }
		default: {std::cout << "Введено неверное значение..."; _getch(); std::system("cls"); break; }
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region firstGeneralTask

void firstTask()
{
	class Rectangle
	{
	private:

		int width;
		int height;

	public:

		Rectangle()
		{
			width = 5;
			height = 10;
		}

		int GetWidth()
		{
			return width;
		}
		int GetHeight()
		{
			return height;
		}
		int SetWidth(int value)
		{
			if (value < 0) throw exception("ERROR: Значение не может быть отрицательным");
			else
			{
				width = value;
				return width;
			}
		}
		int SetHeight(int value)
		{
			if (value < 0) throw exception("ERROR: Значение не может быть отрицательным");
			else
			{
				height = value;
				return height;
			}
		}

		int Ploshad()
		{
			int result;

			result = width * height;
			return result;
		}
		int Perimetr()
		{
			int result;

			result = (width * 2) + (height * 2);
			return result;
		}
	};

	while (true)
	{
		Rectangle a;
		int choice;
		cout << "1) Оставить значения по умолчанию (ширина = 5; высота = 10)\n2) Ввести вручную\n Выбор: "; cin >> choice; system("cls");

		switch (choice)
		{
			case(1): 
			{
				cout << "1) Вычислить площадь\n2) Вычислить пермиетр\n3) Вывести значение ширины и высоты\nВыбор: "; cin >> choice; system("cls");

				switch (choice)
				{
					case(1):
					{
						cout << "Площадь = " << a.Ploshad();										 _getch(); system("cls"); break;
					}
					case(2):
					{
						cout << "Периметр = " << a.Perimetr();										 _getch(); system("cls"); break;
					}
					case(3):
					{
						cout << "Ширина = " << a.GetWidth() << "\nВысота = " << a.GetHeight();		 _getch(); system("cls"); break;
					}
				}
				break;
			}
			case(2):
			{
				int he, wi;
				cout << "Введите ширину: "; cin >> wi;
				cout << "Введите высоту: "; cin >> he;

				try
				{
					a.SetWidth(wi); a.SetHeight(he);
				}
				catch (const std::exception& err)
				{
					cout << err.what(); _getch(); system("cls");
					break;
				}
				
				
				system("cls");

				cout << "1) Вычислить площадь\n2) Вычислить пермиетр\n3) Вывести значение ширины и высоты\nВыбор: "; cin >> choice; system("cls");

				switch (choice)
				{
					case(1):
					{
						cout << "Площадь = " << a.Ploshad();											 _getch(); system("cls"); break;
					}
					case(2):
					{
						cout << "Периметр = " << a.Perimetr();											 _getch(); system("cls"); break;
					}
					case(3):
					{
						cout << "Ширина = " << a.GetWidth() << "\nВысота = " << a.GetHeight();			 _getch(); system("cls"); break;
					}
				}
				break;
			}
		}
		
	}
		
}

#pragma endregion 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region secondTask

//Задание 2
//	Создать класс, описывающий данные человека(типа Person).Поля – имя, фамилия, отчество,
//	возраст и пол.Строки должны быть представлены как символьные массивы, выделять под них
//	память динамически.
//	Создать конструкторы : пустой(определить значения по умолчанию), с параметрами и
//	конструктор копирования.
//	Создать деструктор для освобождения выделенной памяти.
//	Создать метод для вывода данных полей класса в консоль.
//	Организовать работу с этим классом в функции main() для демонстрации.




void secondTask()
{
	class Person
	{
	private:
		char* surname;
		char* name;
		char* patronymic;
		char* age;
		char* gender;

		int lenSurname;
		int lenName;
		int lenPatronymic;
		int lenAge;
		int lenGender;

	public:
		//конструктор по умолчанию
		Person()
		{
			cout << "***Выполняется конструктор по умолчанию***" << endl;

			this->lenSurname = 8;
			this->lenName = 4;
			this->lenPatronymic = 9;
			this->lenAge = 3;
			this->lenGender = 5;

			this->surname	 = new char[this->lenSurname];
			this->name		 = new char[this->lenName];
			this->patronymic = new char[this->lenPatronymic];
			this->age		 = new char[this->lenAge];
			this->gender	 = new char[this->lenGender];

			surname[0] = 'Ф';
			surname[1] = 'а';
			surname[2] = 'м';
			surname[3] = 'и';
			surname[4] = 'л';
			surname[5] = 'и';
			surname[6] = 'я';
			surname[7] = '\0';

			name[0] = 'И';
			name[1] = 'м';
			name[2] = 'я';
			name[3] = '\0';

			patronymic[0] = 'О';
			patronymic[1] = 'т';
			patronymic[2] = 'ч';
			patronymic[3] = 'е';
			patronymic[4] = 'с';
			patronymic[5] = 'т';
			patronymic[6] = 'в';
			patronymic[7] = 'о';
			patronymic[8] = '\0';

			age[0] = '1';
			age[1] = '7';
			age[2] = '\0';

			gender[0] = 'м';
			gender[1] = 'у';
			gender[2] = 'ж';
			gender[3] = '.';
			gender[4] = '\0';

			cout << "***Завершился конструктор по умолчанию***" << endl; _getch(); system("cls");
		}

		//конструктор с параметрами
		Person(string surname, string name, string patronymic, string age, string gender)
		{
			cout << "***Выполняется конструктор с параметрами***" << endl;

			lenSurname = surname.length();
			lenName = name.length();
			lenPatronymic = patronymic.length();
			lenAge = age.length();
			lenGender = gender.length();

			this->surname = new char[lenSurname];
			this->name = new char[lenName];
			this->patronymic = new char[lenPatronymic];
			this->age = new char[lenAge];
			this->gender = new char[lenGender];

			for (int i = 0; i < this->lenSurname; i++)
				this->surname[i]				 = surname[i];
				this->surname[lenSurname]		 = '\0';

			for (int i = 0; i < this->lenName; i++)
				this->name[i]					 = name[i];
				this->name[lenName]				 = '\0';

			for (int i = 0; i < this->lenPatronymic; i++)
				this->patronymic[i]				 = patronymic[i];
				this->patronymic[lenPatronymic]	 = '\0';

			for (int i = 0; i < this->lenAge; i++)
				this->age[i]					 = age[i];
				this->age[lenAge]				 = '\0';


			for (int i = 0; i < this->lenGender; i++)
				this->gender[i]					 = gender[i];
				this->gender[lenGender]			 = '\0';

			cout << "***Завершился конструктор с параметрами***" << endl; _getch(); system("cls");
		}

		//конструктор для копирования
		Person(const Person& value)
		{
			cout << "***Выполняется конструктор копирования***" << endl;

			lenSurname	  = value.lenSurname;
			lenName		  = value.lenName;
			lenPatronymic = value.lenPatronymic;
			lenAge		  = value.lenAge;
			lenGender	  = value.lenGender;

			this->surname	 = new char[value.lenSurname];
			this->name		 = new char[value.lenName];
			this->patronymic = new char[value.lenPatronymic];
			this->age		 = new char[value.lenAge];
			this->gender	 = new char[value.lenGender];

			for (int i = 0; i < value.lenSurname; i++)
			{
				this->surname[i]					 = value.surname[i];
				this->surname[value.lenSurname]		= '\0';
			}
			for (int i = 0; i < value.lenName; i++)
			{
				this->name[i]						 = value.name[i];
				this->surname[value.lenName]		 = '\0';
			}
			for (int i = 0; i < value.lenPatronymic; i++)
			{
				this->patronymic[i]					 = value.name[i];
				this->surname[value.lenPatronymic]	 = '\0';
			}
			for (int i = 0; i < value.lenAge; i++)
			{
				this->age[i]						 = value.age[i];
				this->surname[value.lenAge]			 = '\0';
			}
			for (int i = 0; i < value.lenGender; i++)
			{
				this->gender[i]						 = value.gender[i];
				this->surname[value.lenGender]		 = '\0';
			}

			cout << "***Завершился конструктор копирования***" << endl; _getch(); system("cls");
		}

		//Вывод в консоль
		void Print()
		{
			system("cls");

			cout << "Фамилия: "  << surname
				 << "\nИмя: "      << name
				 << "\nОтчество: " << patronymic
				 << "\nВозраст: "  << age
				 << "\nПол: "      << gender << endl;

			_getch(); system("cls");
		}

		//деструктор
		~Person()
		{
			cout << "***Выполняется деструктор***" << endl;

			delete this->surname;
			delete this->name;
			delete this->patronymic;
			delete this->age;
			delete this->gender;

			cout << "***Завершился деструктор***" << endl; _getch(); system("cls");
		}
	};


	while (true)
	{
		int choice;
		cout << "1) Создать по умолчанию\n2) Создать вручную\n\tВыбор: "; cin >> choice;

		switch (choice)
		{
			case(1):
			{
				Person* MyPerson1 = new Person();

				cout << "1) Вывести информацию в консоль\n2) Создать копию\n\tВыбор: "; cin >> choice;

				switch (choice)
				{
					case(1):
					{
						MyPerson1->Print();

						_getch(); system("cls");
						break;
					}
					case(2):
					{
						Person* NewPerson = new Person(*MyPerson1);
						MyPerson1->Print();

						_getch(); system("cls");
						break;
					}
				}
				break;
			}
			case(2):
			{
				string surname;
				string name;
				string patronymic;
				string age;
				string gender;

				cout << "Введите фамилию: "; cin >> surname;
				cout << "Введите имя: "; cin >> name;
				cout << "Введите отчество: "; cin >> patronymic;
				cout << "Введите возраст: "; cin >> age;
				cout << "Введите пол: "; cin >> gender;

				system("cls");

				Person* MyPerson2 = new Person(surname, name, patronymic, age, gender);

				cout << "1) Вывести информацию в консоль\n2) Создать копию\n\tВыбор: "; cin >> choice;

				switch (choice)
				{
					case(1):
					{
						MyPerson2->Print();

						_getch(); system("cls");
						break;
					}
					case(2):
					{
						Person* NewPerson = new Person(*MyPerson2);
						MyPerson2->Print();

						_getch(); system("cls");
						break;
					}
				}
				break;
			}
		}



		


		choice = 0;
	}

}

#pragma endregion

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma region individualTask

void individualTask()
{

}

#pragma endregion

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





void additionalTask()
{
	_getch();
}