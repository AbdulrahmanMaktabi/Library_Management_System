#pragma once
#include <iostream>
#include "Author.h"
using namespace std;

class Book : public Author
{
protected:
	int Book_id;
	string title;
	string Publishing_date;
	int version;
	Author author;
public:
	//Static variable to count all authors
	static int BooksCount;

	//Defualt Constructor
	Book();

	//Parameter Constructor , Overload Constructor
	Book(string name, string phone, string email, string title, string Publishing_date, int version);
	

	//Setters Functions
	void set_Book_ID(int id);

	void set_Book_Title(string title);

	void set_Book_PublishingDate(string PD);
	
	void set_Book_Version(int version);

	//Getters Functions
	int get_Book_ID();

	string get_Book_Title();

	string get_Book_PublishingDate();

	int get_Book_Version();

	//Static function to retrun Author count
	static int get_Book_Count();
};

