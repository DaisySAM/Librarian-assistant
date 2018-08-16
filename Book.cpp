#include "Book.h"

	Book::Book(){}
	Book::Book(string Title,string Genre, int AuthorId, int Udk, int Count, int Year){
		title = Title;
		genre = Genre;
		authorId = AuthorId;
		UDK = Udk;
		count = Count;
		year = Year;
	}

	string Book::getTitle(){ return title; }
	void Book::setTitle(string Title){ title = Title; }
	string Book::getGenre(){ return genre; };
	void Book::setGenre(string Genre){ genre = Genre; };
	int Book::getAuthorId(){ return authorId; }
	void Book::setAuthorId(int AuthorId){ authorId = AuthorId; }
	int Book::getUDK(){ return UDK; }
	void Book::setUDK(int Udk){ UDK = Udk; }
	int Book::getCount(){ return count; }
	void Book::setCount(int Count){ count = Count; }
	int Book::getYear(){ return year; }
	void Book::setYear(int Year){ year = Year; }

