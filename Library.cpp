#include "Library.h"
#include "Author.h"
#include "Book.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

void Library::add_author(vector<Author>& vec) {

	string name = "";
	string phone = "";
	string email = "";
	Author author;

	cout << "Enter Author Name: ";
	getline(cin, name);

	cout << "Enter Author Phone: ";
	getline(cin, phone);

	cout << "Enter Author Email";
	getline(cin, email);

	cout << "The author named "<< name << " was added successfully " << endl;

	author.set_Author_Name(name);
	author.set_Author_Email(email);
	author.set_Author_Phone(phone);

	vec.push_back(author);
	cin.ignore();
}

void Library::remove_author(vector<Author>& vec) {
	
	int id;

	// size() function returns the number of elements in the vec 
	// so to get to the last element in the vector we shoule to subtract 1 of the size
	int last_index = vec.size() - 1;

	//I make this do while loop to check if the id we take it is available
	do {
		cout << "Enter the ID of the author you want to delete: ";
		cin >> id;
	} while (last_index < id);

	//erease() Removes from the vector either a single element
	vec.erase(vec.begin()+id);

	cout << "The author named "<< vec[id].get_Author_Name() << " was deleted successfully " << endl;
}

void Library::print_author(vector<Author>& vec) {
	
	int id;

	// size() function returns the number of elements in the vec 
	// so to get to the last element in the vector we shoule to subtract 1 of the size
	int last_index = vec.size() - 1;

	//I make this do while loop to check if the id we take it is available
	do {
		cout << "Enter the ID of the author you want to Show his Information: ";
		cin >> id;
	} while (last_index < id);

	//print author information
	cout << "Author Name: " << vec[id].get_Author_Name() << endl;
	cout << "Author Email: " << vec[id].get_Athuor_Email() << endl;
	cout << "Author Phone Number: " << vec[id].get_Author_Phone() << endl;
	cout << "+++++++++++++++ Done +++++++++++++++" << endl;
}

void Library::print_author_books(vector<Book>& vec) {
	
	int id;

	// size() function returns the number of elements in the vec 
	// so to get to the last element in the vector we shoule to subtract 1 of the size
	int last_index = vec.size() - 1;

	//I make this do while loop to check if the id we take it is available
	do {
		cout << "Enter the ID of the author you want to Show his Books: ";
		cin >> id;
	} while (last_index < id);

	//we make for loop to show all Books Authors and compare it
	for (int i = 0; i < vec.size(); i++) {
		//If we see that the author we are looking for exists
		//we will write the name of the book
		if (vec[id].get_Author_Name() == vec[i].get_Author_Name())
			cout <<"Book "<< i+1 << ": " <<vec[i].get_Book_Title() << endl;
	}
}

void Library::add_book(vector<Book>& vec) {
	string name;
	string phone;
	string email;
	string title;
	string PD;
	int version;

	do {
		cout << "Please Enter The name of Author: ";
		getline(cin, name);
	} while (name.length() < 5);
	
	do {
		cout << "Please Enter The phone number of Author: ";
		getline(cin, phone);
	} while (phone.length() < 8);

	do {
		cout << "Please Enter The email of Author: ";
		getline(cin, email);
	} while (email.length() < 8);

	do {
		cout << "Please Enter The Book Title: ";
		getline(cin, title);
	} while (title.length() < 5);
	
	do {
		cout << "Please Enter The Publishing Date of Book: ";
		getline(cin, PD);
	} while (PD.length() < 8);

	do {
		cout << "Please Enter The Version of Book: ";
		cin >> version;
	} while (version < 0);

	Book book(name , phone , email , title , PD , version);

	vec.push_back(book);

	cin.ignore();
}

void Library::remove_book(vector<Book>& vec)
{
	int id;

	// size() function returns the number of elements in the vec 
	// so to get to the last element in the vector we shoule to subtract 1 of the size
	int last_index = vec.size() - 1;

	//I make this do while loop to check if the id we take it is available
	do {
		cout << "Enter the ID of the author you want to Show his Books: ";
		cin >> id;
	} while (last_index < id);

	//erease() Removes from the vector either a single element
	vec.erase(vec.begin() + id);

	cout << "The Book named " << vec[id].get_Book_Title() << " was deleted successfully " << endl;
}

void Library::print_book(vector<Book>& vec)
{
	int id;

	// size() function returns the number of elements in the vec 
	// so to get to the last element in the vector we shoule to subtract 1 of the size
	int last_index = vec.size() - 1;

	//I make this do while loop to check if the id we take it is available
	do {
		cout << "Enter the ID of the author you want to Show his Books: ";
		cin >> id;
	} while (last_index < id);

	cout << "Author Inf: " << endl;
	cout << "Author Name: " << vec.at(id).get_Author_Name() << endl;
	cout << "Author Phone: " << vec.at(id).get_Author_Phone() << endl;
	cout << "Author Email: " << vec.at(id).get_Athuor_Email() << endl;
	cout << "Book Info: " << endl;
	cout << "Book Title: " << vec.at(id).get_Book_Title() << endl;
	cout << "Book Publishing Date: " << vec.at(id).get_Book_PublishingDate() << endl;
	cout << "Book Version: " << vec.at(id).get_Book_Version() << endl;
	cout << "+++++++++++++++ Done +++++++++++++++" << endl;
}

