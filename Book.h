#include <string>
using namespace std;
#pragma once

class Book{
private:
public:
	string title;
	string genre;
	int authorId;
	int UDK;
	int count;
	int year;

public:
	Book();
	Book(string, string, int, int, int, int);
	int getId();
	void setId(int);
	string getTitle();
	void setTitle(string);
	string getGenre();
	void setGenre(string);
	int getAuthorId();
	void setAuthorId(int);
	int getUDK();
	void setUDK(int);
	int getCount();
	void setCount(int);
	int getYear();
	void setYear(int);
};
