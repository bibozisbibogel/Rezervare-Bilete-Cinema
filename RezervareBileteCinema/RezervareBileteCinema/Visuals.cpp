#include "Visuals.h"
#include <windows.h>
void Visuals::PaymentAnimation()
{
	int Max = 0, it = 1;
	cout << "\n";
	while (Max != 30)
	{
		system("cls");
		cout << "   Procesare plata de " << 25 << " lei...\n";
		cout << "-------------------------------";
		cout << "\n";
		cout << "|";
		for (int j = 0; j < it - 1; j++)
		{
			cout << char(35);
		}
		for (int j = 0; j < 29 - Max; j++)
		{
			cout << " ";
		}
		cout << "|";
		cout << "\n";
		cout << "-------------------------------";
		Max++;
		it++;
		Sleep(25);
	}
}
void Visuals::StartAnimation(string& nume, string& parola)
{
	system("cls");
	cout << "========================================================================================================================\n";
	cout << "        Bine ati venit pe platforma noastra! Va rugam sa va inregistrati inainte sa faceti orice actiune!\n";
	cout << "========================================================================================================================\n";
	cout << "\nIntroduceti username-ul: ";
	cin >> nume;
	cout << "Introduceti parola: ";
	cin >> parola;
	cout << '\n';
}
void Visuals::Greetings(string nume)
{
	cout << "Conectare reusita! ";
	cout << "Bine ai revenit, " << nume << "!\n";
}
void Visuals::NumberOfReservations(int& reservations)
{
	cout << "\nIntroduceti numarul de rezervari pe care doriti sa-l faceti astazi: ";
	cin >> reservations;
}