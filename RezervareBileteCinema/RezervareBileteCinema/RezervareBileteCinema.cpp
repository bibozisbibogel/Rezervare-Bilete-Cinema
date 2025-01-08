/// TO-DO: la sali in loc de vector<string> trebuie sa fac un vector<room> si sa ma asigur ca matricea de filme nu este aceeasi ~ Done
/// TO-DO: Datele le citesc dintr-un fisier (nu fac in header (de exemplu: filmele le citesc dintr-un fisier) ) ~ Done
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "User.h"
#include "Movie.h"
#include "Reservation.h"
#include "Cinema.h"
#include "Payment.h"
#include "CinemaReservationSystem.h"
#include "Visuals.h"
#include <windows.h> 
#include "Room.h"
#include <fstream>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
ifstream fin("DateSali.txt");
ifstream FEIN("DateCinema.txt");
int main() {
	FAST;
	CinemaReservationSystem cinema_system;
	string nume, parola;
	int reservations;
	system("cls");
	Visuals::StartAnimation(nume, parola);
	cinema_system.signup(nume, parola);
	if (cinema_system.login(nume, parola))
	{
		Visuals::Greetings(nume);
		Visuals::NumberOfReservations(reservations);
		for (int i = 0; i < reservations; i++) {
			cinema_system.showMovies();                
			cinema_system.makeReservation(nume);
			Sleep(750);
		}
		cinema_system.viewReservations();
		cinema_system.logout(nume);
	}

	return 0;
}