
#include <string>
using namespace std;

class Author {
private:
public:
	int id;
	string name;
	string surname;
	string thirdname;
	int date;

public:
	Author();
	Author(int Id, string Name, string Surname, string Thirdname, int Date);
	int getId();
	void setId(int Id);
	string getName();
	void setName(string Name);
	string getSurname();
	void setSurname(string Surname);
	string getThirdname();
	void setThirdname(string Thirdname);
	int getDate();
	void setDate(int Date);
};

