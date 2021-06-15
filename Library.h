#pragma once
#include "Author.h"
#include "Book.h"
#include <iostream>
#include <vector>
using namespace std;
class Library : public Author , public Book
{
private:

public:
	//Functions
	void add_author(vector<Author>&);

	void remove_author(vector<Author>&);

	void print_author(vector<Author>&);

	void print_author_books(vector<Book>&);

	void add_book(vector<Book>&);

	void remove_book(vector<Book>&);

	void print_book(vector<Book>&);

};
