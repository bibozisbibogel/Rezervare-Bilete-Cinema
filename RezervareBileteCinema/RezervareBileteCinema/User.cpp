#include "User.h"
#include <iostream>
#include <string>
using namespace std;

/// Functiile clasei User
 bool User::login(string nume, string parola)
	{
		if (username == nume && password == parola)
		{
			isLoggedIn = true;
			///cout << "Conectare reusita!\n";
			return true;
		}
		else
		{
			cout << "EROARE! NUME SAU PAROLA GRESITA!\n";
			return false;
		}
	}
void User::logout() {
		isLoggedIn = false;
		cout << "Deconectare reusita!\n";
	}
bool User::isLogged() { return isLoggedIn; }
