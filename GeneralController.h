#include <fstream>
#include <iostream>
#include "Storage.h"
#include "Library.h"
#include "ctype.h"
using namespace System;

class GeneralController{

public:
	// Конвертация std::string в System::String^
	static System::String^ StdToSys(std::string StdStr){
		return gcnew System::String(StdStr.c_str());
	}

	// Конвертация System::String^ в std::string
	static const std::string SysToStd(System::String^ SysStr){
		using namespace Runtime::InteropServices;
		char *v = (char*)(Marshal::StringToHGlobalAnsi(SysStr)).ToPointer();
		std::string result = std::string(v);
		Marshal::FreeHGlobal(System::IntPtr((void*)v));
		return result;
	}

	// метод (функция), которая позволяет из строки брать число до точки
	static int StringConvertToInt(String^ Line){
		Int32 BUF[10];
		string tyy;
		int id;
	
		for (int i = 0; i < Line->Length; i++){
			if (Line[i] != '.')
			{
				BUF[i] = Convert::ToInt32(Line[i]);
			}
			else break;
		}
		for (int i = 0; i < 10; i++){
			if ((Convert::ToString(BUF[i])) == "48")
				tyy += "0";
			if ((Convert::ToString(BUF[i])) == "49")
				tyy += "1";
			if ((Convert::ToString(BUF[i])) == "50")
				tyy += "2";
			if ((Convert::ToString(BUF[i])) == "51")
				tyy += "3";
			if ((Convert::ToString(BUF[i])) == "52")
				tyy += "4";
			if ((Convert::ToString(BUF[i])) == "53")
				tyy += "5";
			if ((Convert::ToString(BUF[i])) == "54")
				tyy += "6";
			if ((Convert::ToString(BUF[i])) == "55")
				tyy += "7";
			if ((Convert::ToString(BUF[i])) == "56")
				tyy += "8";
			if ((Convert::ToString(BUF[i])) == "57")
				tyy += "9";
		}
		id = atoi(tyy.c_str());
		return id;
	}

	// создание и добавление в хранилище объект класса Book 
	static string addBook(string title, string genre, int authorId, int Udk, int count, int year){
		Book* pBook = new Book(title, genre, authorId, Udk, count, year);
		storageBook.push(*pBook);
		return title;
	}

	// создание и добавление в хранилище объект класса Author
	static void addAuthor(int id, string name, string surname, string thirdname, int date){
		Author* pAuthor = new Author(id, name, surname, thirdname, date);
		storageAuthor.push(*pAuthor);
	}

	// функция для очистки файла перед сохранением
	static void clear_file(const std::string& file_name)
	{
		std::fstream(file_name, std::fstream::out);
	}

	// сохранение временного хранилища объектов Author в файл
	static void saveAuthor(){
		clear_file("Author_Storage.txt");
		ofstream Fout("Author_Storage.txt");
		Author __author;
		while (!storageAuthor.isEmpty()){
			__author = storageAuthor.pop();
			Fout << __author.id << " " << __author.name.c_str() << " " << __author.surname.c_str() << " " << __author.thirdname.c_str() << " " << __author.date << " ";
		}
	}

	// сохранение временного хранилища объектов Book в файл
	static string saveBook(){
		clear_file("Book_Storage.txt");
		ofstream fout("Book_Storage.txt");
		Book __book;
		while (!storageBook.isEmpty()){
		 __book= storageBook.pop();
		 fout << __book.title.c_str() << " " << __book.genre.c_str() << " " << __book.authorId << " " << __book.UDK << " " << __book.count << " " << __book.year << " ";
		}
		return __book.title;
	}

	// загрузка объектов типа Author во временное хранилище
	static void loadAuthor(){
		ifstream Fin("Author_Storage.txt");
		Author __author;
		while (!Fin.eof()){
			Fin >> __author.id >> __author.name >> __author.surname >> __author.thirdname >> __author.date;
			storageAuthor.push(__author);
		}
	}
	
	// загрузка объектов типа Book во временное хранилище
	static string loadBook(){
		ifstream fin("Book_Storage.txt");
		Book __book;
		while (!fin.eof()){
			fin >> __book.title >> __book.genre >> __book.authorId >> __book.UDK >> __book.count >> __book.year;
			storageBook.push(__book);
		}
		//clear_file("Book_Storage.txt");
		return __book.title;
	}

};

