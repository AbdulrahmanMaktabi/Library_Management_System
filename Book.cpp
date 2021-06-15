#include "Book.h"
#include "Author.h"
#include <iostream>
using namespace std;

//Static variable to count all authors
int Book::BooksCount = 0;

//Defualt Constructor
Book::Book() {
	BooksCount++;
	this->Book_id = BooksCount;
}

//Parameter Constructor , Overload Constructor
Book::Book(string name, string phone, string email, string title, string Publishing_date, int version):Author(name , phone , email){
	BooksCount++;
	this->Book_id = BooksCount;
	this->title = title;
	this->Publishing_date = Publishing_date;
	this->version = version;
}

//Setters Functions
void Book::set_Book_ID(int id) {
	this->Book_id = id;
}

void Book::set_Book_Title(string title) {
	this->title = title;
}

void Book::set_Book_PublishingDate(string PD) {
	this->Publishing_date = PD;
}

void Book::set_Book_Version(int version) {
	this->version = version;
}

//Getters Functions
int Book::get_Book_ID() {
	return this->Book_id;
}

string Book::get_Book_Title() {
	return this->title;
}

string Book::get_Book_PublishingDate() {
	return this->Publishing_date;
}

int Book::get_Book_Version() {
	return this->version;
}

//Static function to retrun Books count
int Book::get_Book_Count()
{
	return BooksCount;
}

