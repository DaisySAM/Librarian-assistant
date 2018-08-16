#include "Author.h"

Author::Author(){}
Author::Author(int Id, string Name, string Surname, string Thirdname, int Date){
	id = Id;
	name = Name;
	surname = Surname;
	thirdname = Thirdname;
	date = Date;
}

int Author::getId(){ return id; }
void Author::setId(int Id){ id = Id; }
string Author::getName(){ return name; }
void Author::setName(string Name){ name = Name; }
string Author::getSurname(){ return surname; }
void Author::setSurname(string Surname){ surname = Surname; }
string Author::getThirdname(){ return thirdname; }
void Author::setThirdname(string Thirdname){ thirdname = Thirdname; }
int Author::getDate(){ return date; }
void Author::setDate(int Date){ date = Date; }
