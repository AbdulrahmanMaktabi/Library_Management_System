#pragma once
#include <iostream>
using namespace std;

class Author
{
protected:
	int Author_id;
	string name;
	string phone;
	string email;
public:
	//Static variable to count all authors
	static int AuthorsCount;

	//Defualt Constructor
	Author();

	//Parameter Constructor , Overload Constructor
	Author(string name, string phone, string email);

	//Setters Functions
	void set_Author_ID(int id);

	void set_Author_Name(string name);

	void set_Author_Phone(string phone);

	void set_Author_Email(string email);

	//Getters Functions
	int get_Author_Id();

	string get_Author_Name();

	string get_Author_Phone();

	string get_Athuor_Email();

	//Static function to retrun Author count
	static int get_Author_Count();
};

