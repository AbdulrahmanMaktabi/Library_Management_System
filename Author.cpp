#include "Author.h"
#include <iostream>
using namespace std;

//Static variable to count all authors
int Author::AuthorsCount = 0;

//Defualt Constructor
Author::Author() {
	AuthorsCount++;
	this->Author_id = AuthorsCount;
}

//Parameter Constructor , Overload Constructor
Author::Author(string name, string phone, string email) {
	this->Author_id = AuthorsCount;
	this->name = name;
	this->phone = phone;
	this->email = email;
}

//Setters Functions
void Author::set_Author_ID(int id) {
	this->Author_id = id;
}

void Author::set_Author_Name(string name) {
	this->name = name;
}

void Author::set_Author_Phone(string phone) {
	this->phone = phone;
}

void Author::set_Author_Email(string email) {
	this->email = email;
}

//Getters Functions
int Author::get_Author_Id() {
	return this->Author_id;
}

string Author::get_Author_Name() {
	return this->name;
}

string Author::get_Author_Phone() {
	return this->phone;
}

string Author::get_Athuor_Email() {
	return this->email;
}

//Static function to retrun Author count
int Author::get_Author_Count()
{
	return AuthorsCount;
}
