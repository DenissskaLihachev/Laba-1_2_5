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


		cout << "\t\t\t\t\t|1)������� 1             |\n\t\t\t\t\t|2)������� 2             |\n\t\t\t\t\t" <<
			"|3)�������������� �������|\n\t\t\t\t\t|4)�������������� �������|\n\t\t\t\t\t---------------" <<
			"-----------\n\t\t\t\t\t�����: ";
		int menuChoice; cin >> menuChoice;

		switch (menuChoice)
		{
		case(1): { std::system("cls"); firstTask();      break; }
		case(2): { std::system("cls"); secondTask();     break; }
		case(3): { std::system("cls"); individualTask(); break; }
		case(4): { std::system("cls"); additionalTask(); break; }
		default: {std::cout << "������� �������� ��������..."; _getch(); std::system("cls"); break; }
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
			if (value < 0) throw exception("ERROR: �������� �� ����� ���� �������������");
			else
			{
				width = value;
				return width;
			}
		}
		int SetHeight(int value)
		{
			if (value < 0) throw exception("ERROR: �������� �� ����� ���� �������������");
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
		cout << "1) �������� �������� �� ��������� (������ = 5; ������ = 10)\n2) ������ �������\n �����: "; cin >> choice; system("cls");

		switch (choice)
		{
			case(1): 
			{
				cout << "1) ��������� �������\n2) ��������� ��������\n3) ������� �������� ������ � ������\n�����: "; cin >> choice; system("cls");

				switch (choice)
				{
					case(1):
					{
						cout << "������� = " << a.Ploshad();										 _getch(); system("cls"); break;
					}
					case(2):
					{
						cout << "�������� = " << a.Perimetr();										 _getch(); system("cls"); break;
					}
					case(3):
					{
						cout << "������ = " << a.GetWidth() << "\n������ = " << a.GetHeight();		 _getch(); system("cls"); break;
					}
				}
				break;
			}
			case(2):
			{
				int he, wi;
				cout << "������� ������: "; cin >> wi;
				cout << "������� ������: "; cin >> he;

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

				cout << "1) ��������� �������\n2) ��������� ��������\n3) ������� �������� ������ � ������\n�����: "; cin >> choice; system("cls");

				switch (choice)
				{
					case(1):
					{
						cout << "������� = " << a.Ploshad();											 _getch(); system("cls"); break;
					}
					case(2):
					{
						cout << "�������� = " << a.Perimetr();											 _getch(); system("cls"); break;
					}
					case(3):
					{
						cout << "������ = " << a.GetWidth() << "\n������ = " << a.GetHeight();			 _getch(); system("cls"); break;
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

//������� 2
//	������� �����, ����������� ������ ��������(���� Person).���� � ���, �������, ��������,
//	������� � ���.������ ������ ���� ������������ ��� ���������� �������, �������� ��� ���
//	������ �����������.
//	������� ������������ : ������(���������� �������� �� ���������), � ����������� �
//	����������� �����������.
//	������� ���������� ��� ������������ ���������� ������.
//	������� ����� ��� ������ ������ ����� ������ � �������.
//	������������ ������ � ���� ������� � ������� main() ��� ������������.




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
		//����������� �� ���������
		Person()
		{
			cout << "***����������� ����������� �� ���������***" << endl;

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

			surname[0] = '�';
			surname[1] = '�';
			surname[2] = '�';
			surname[3] = '�';
			surname[4] = '�';
			surname[5] = '�';
			surname[6] = '�';
			surname[7] = '\0';

			name[0] = '�';
			name[1] = '�';
			name[2] = '�';
			name[3] = '\0';

			patronymic[0] = '�';
			patronymic[1] = '�';
			patronymic[2] = '�';
			patronymic[3] = '�';
			patronymic[4] = '�';
			patronymic[5] = '�';
			patronymic[6] = '�';
			patronymic[7] = '�';
			patronymic[8] = '\0';

			age[0] = '1';
			age[1] = '7';
			age[2] = '\0';

			gender[0] = '�';
			gender[1] = '�';
			gender[2] = '�';
			gender[3] = '.';
			gender[4] = '\0';

			cout << "***���������� ����������� �� ���������***" << endl; _getch(); system("cls");
		}

		//����������� � �����������
		Person(string surname, string name, string patronymic, string age, string gender)
		{
			cout << "***����������� ����������� � �����������***" << endl;

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

			cout << "***���������� ����������� � �����������***" << endl; _getch(); system("cls");
		}

		//����������� ��� �����������
		Person(const Person& value)
		{
			cout << "***����������� ����������� �����������***" << endl;

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

			cout << "***���������� ����������� �����������***" << endl; _getch(); system("cls");
		}

		//����� � �������
		void Print()
		{
			system("cls");

			cout << "�������: "  << surname
				 << "\n���: "      << name
				 << "\n��������: " << patronymic
				 << "\n�������: "  << age
				 << "\n���: "      << gender << endl;

			_getch(); system("cls");
		}

		//����������
		~Person()
		{
			cout << "***����������� ����������***" << endl;

			delete this->surname;
			delete this->name;
			delete this->patronymic;
			delete this->age;
			delete this->gender;

			cout << "***���������� ����������***" << endl; _getch(); system("cls");
		}
	};


	while (true)
	{
		int choice;
		cout << "1) ������� �� ���������\n2) ������� �������\n\t�����: "; cin >> choice;

		switch (choice)
		{
			case(1):
			{
				Person* MyPerson1 = new Person();

				cout << "1) ������� ���������� � �������\n2) ������� �����\n\t�����: "; cin >> choice;

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

				cout << "������� �������: "; cin >> surname;
				cout << "������� ���: "; cin >> name;
				cout << "������� ��������: "; cin >> patronymic;
				cout << "������� �������: "; cin >> age;
				cout << "������� ���: "; cin >> gender;

				system("cls");

				Person* MyPerson2 = new Person(surname, name, patronymic, age, gender);

				cout << "1) ������� ���������� � �������\n2) ������� �����\n\t�����: "; cin >> choice;

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