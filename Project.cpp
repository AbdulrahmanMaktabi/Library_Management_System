#include <iostream>
#include <string>
#include <vector>
#include "Author.h"
#include "Book.h"
#include "Library.h"
using namespace std;

int main()
{
	int op;

	vector <Author> AuthorVec;
	vector <Book> BookVec;
	Library lib;
	

	lib.add_author(AuthorVec);
	lib.add_book(BookVec);
	lib.print_author(AuthorVec);
	lib.print_book(BookVec);
	lib.print_author_books(BookVec);


	/*cout << "Welcome to my first OOP project :)\n" << endl;
	cout << "\t\tLibrary Project" << endl;

	cout << "-1- if you want to add author press (1): " << endl;
	cout << "-2- if you want to remove author press (2): " << endl;
	cout << "-3- if you want to show author informition pres (3): " << endl;
	cout << "-4- if you want to show author books press (4): " << endl;
	cout << "-5- if you want to add book press (5): " << endl;
	cout << "-6- if you want to remove book press (6): " << endl;
	cout << "-7- if you want to show book information press (7): " << endl;
	cout << "-8- if you want to show books count press (8): " << endl;
	cout << "-9- if you want to show authors count press (9): " << endl;
	cout << "-10- if you want to exit press (10): " << endl;
	cout << "Please Enter: ";

	cin >> op;

	switch (op)
	{
	case 1:
		lib.add_author(AuthorVec);
		break;
	case 2:
		lib.remove_author(AuthorVec);
		break;
	case 3:
		lib.print_author(AuthorVec);
		break;
	case 4:
		lib.print_author_books(BookVec);
		break;
	case 5:
		lib.add_book(BookVec);
		break;
	case 6:
		lib.remove_book(BookVec);
		break;
	case 7:
		lib.print_book(BookVec);
		break;
	case 8:
		cout << "Books Count is: " << Book::get_Book_Count() << endl;;
		break;
	case 9:
		cout << "Authors Count is: " << Author::get_Author_Count() << endl;
		break;
	case 10:
		cout << "Good Bye! , see you later" << endl;
		break;
	default:
		cout << "invalid error !\a" << endl;
		break;
	}*/
	return 0;
}
