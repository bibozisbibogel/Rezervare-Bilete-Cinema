#include "Payment.h"
#include <iostream>
using namespace std;
bool Payment::processPayment(double amount)
{
	cout << "Procesare plata de " << amount << " lei...\n";
	cout << "Plata a fost efectuata cu succes!\n";
	return true;
}