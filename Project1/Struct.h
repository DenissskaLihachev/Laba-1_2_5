#pragma once

#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

class reader
{
private:
	reader* next = NULL;		//указатель на следующий элемент
	reader* prev = NULL;		//указатель на предыдущий элемент
public:

	class Data
	{
	public:

		string surname;
		string name;
		string patronymic;
		string numberTicket;
		string booksName;
		string refundPeriod;
		int MaxRefundPeriod = 0;
		
		Data()
		{
			surname = { "None" };
			name = { "None" };
			patronymic = { "None" };
			numberTicket = { "None" };
			booksName = { "None" };
			refundPeriod = { "None" };
			MaxRefundPeriod = 0;

		}

		Data(const Data& other)
		{
			this->surname = other.surname;
			this->name = other.name;
			this->patronymic = other.patronymic;
			this->numberTicket = other.numberTicket;
			this->booksName = other.booksName;
			this->refundPeriod = other.refundPeriod;
			this->MaxRefundPeriod = other.MaxRefundPeriod;
		}

		void SortData(reader*& head, reader*& tail, reader*& readers);
	}DATA;
	
	reader()
	{
		this->next = NULL;
		this->prev = NULL;

		this->DATA.name = { "None" };
		this->DATA.surname = { "None" };
		this->DATA.patronymic = { "None" };
		this->DATA.numberTicket = { "None" };
		this->DATA.booksName = { "None" };
		this->DATA.refundPeriod = { "None" };
		this->DATA.MaxRefundPeriod = 0;
	}

	reader(string surname, string name, string patronymic, string numberTicket, string booksName, string refundPeriod, int MaxRefundPeriod)
	{
		this->next = this;
		this->prev = this;

		this->DATA.name = name;
		this->DATA.surname = surname;
		this->DATA.patronymic = patronymic;
		this->DATA.numberTicket = numberTicket;
		this->DATA.booksName = booksName;
		this->DATA.refundPeriod = refundPeriod;
		this->DATA.MaxRefundPeriod = MaxRefundPeriod;


		cout << "ФИО: " << this->DATA.surname << " " << this->DATA.name << " " << this->DATA.patronymic
			<< " Номер билета: " << this->DATA.numberTicket
			<< "\nНазвание книги: " << this->DATA.booksName
			<< " День возврата: " << this->DATA.refundPeriod
			<< " Max. возврат: " << this->DATA.MaxRefundPeriod;

		_getch();
		system("cls");
	}

	~reader()
	{
		if (this)
		{
			while (true)
			{
				if (this->prev)
				{
					this == this->prev;
				}
			}

			if (this->next)
			{
				this == this->next;
				delete this->prev;
			}

			else
			{
				delete this;
			}
		}
	}
};