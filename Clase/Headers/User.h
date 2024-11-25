#pragma once
#include <iostream>
#include <string>
using namespace std;

/// CLASA USER pentru gestionarea conturilor de utilizator
class User
{
private:
	string username;
	string password;
	bool isLoggedIn;
public:
	User() : username(""), password(""), isLoggedIn(false) {} /// constructor default

	User(string nume, string parola) : username(nume), password(parola), isLoggedIn(false) {}
	bool login(string nume, string parola);
	void logout();
	bool isLogged();

};

