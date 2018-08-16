#include "Author.h"
#include "Book.h"
using namespace std;

template <class T> class Storage {
private:
	T* head;
	int index;
public:
	Storage(int count=0) {
		head = new T[count];
		index = 0;
	}
	void push(T value);
	void pushUp(T value);
	T pop();
	T popDown();
	bool isEmpty();
	bool isFull();
};

Storage<Book> storageBook(10);
Storage<Author> storageAuthor(10);

template <class T> void Storage <T> ::push(T example) {
	head[index++] = example;
}
template <class T> void Storage <T> ::pushUp(T example) {
	head[++index] = example;
}
template <class T> T Storage <T> ::pop() {
	return head[--index];
}
template <class T> T Storage <T> ::popDown() {
	return head[index++];
}
template <class T> bool  Storage <T> ::isEmpty() {
	if (index == 0) { return true; }
	else { return false; }
}
template <class T> bool Storage <T>::isFull() {
	if (index > count - 1) { return true; }
	else { return false; }
}
