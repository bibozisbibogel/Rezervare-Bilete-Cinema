#include "CinemaReservationSystem.h"
#include "Visuals.h"
#include "Movie.h"
#include "Reservation.h"
#include "Cinema.h"
#include "User.h"
#include <fstream>
#include <iostream>
using namespace std;
CinemaReservationSystem::CinemaReservationSystem(): cinema(5,5){
	readMoviesFromFile("DateCinema.txt");
	readRoomsFromFile("DateSali.txt");
}
void CinemaReservationSystem::readMoviesFromFile(const string& file_name)
{
	ifstream FEIN(file_name);
	string title, time;
	while (getline(FEIN, title))
	{
		vector<string>times;
		while (getline(FEIN, time) && !time.empty())
		{
			times.emplace_back(time);
		}
		movies.emplace_back(title, times);
	}
	FEIN.close();
}
void CinemaReservationSystem::readRoomsFromFile(const string& file_name)
{
	ifstream fin(file_name);
	string name;
	int rows, cols;
	while (fin >> name >> rows >> cols)
	{
		rooms.emplace_back(name, rows, cols);
	}
	fin.close();
}
void CinemaReservationSystem::signup(string nume, string parola)
{
	users[nume] = User(nume, parola);
	cout << "Cont creat cu succes pentru utilizatorul " << nume << " !\n";
}
bool CinemaReservationSystem::login(string nume, string parola)
{
	if (users.find(nume) != users.end())
		return users[nume].login(nume, parola);
	else
	{
		cout << "Utilizator inexistent!\n";
		return false;
	}
}
void CinemaReservationSystem::logout(string nume)
{
	if (users.find(nume) != users.end())
		users[nume].logout();
	else
		cout << "Utilizator inexistent!\n";
}
void CinemaReservationSystem::showMovies()
{
	system("cls");
	cout << "Filme disponibile:\n";
	for (auto& movie : movies)
	{
		cout << "- " << movie.title << '\n';
		movie.displayShowTimes();
	}
}
void CinemaReservationSystem::makeReservation(string nume) {
	system("cls");
	if (users.find(nume) == users.end() || !users.at(nume).isLogged()) {
		cout << "EROARE! LIPSA CONT!\n";
		return;
	}
	int roomIndex, movieIndex, timeIndex, row, col;
	cout << "Selectati sala (pozitia):\n";
	for (int i = 0; i < rooms.size(); i++) {
		cout << i << ". " << rooms[i].name << '\n';
	}
	cout << "Sala dorita este cea de pe pozitia: ";
	cin >> roomIndex;
	system("cls");
	cout << "Selectati filmul (pozitia):\n";
	for (int i = 0; i < movies.size(); i++) {
		cout << i << ". " << movies[i].title << '\n';
	}
	cout << "Filmul dorit este cel de pe pozitia: ";
	cin >> movieIndex;
	cout << "Selectati ora (pozitia):\n";
	movies[movieIndex].displayShowTimes();
	cout << "Ora dorita este cea de pe pozitia: ";
	cin >> timeIndex;
	cout << "Selectati randul si locul (se incepe de la pozitia 0):\n";
	rooms[roomIndex].displaySeats();
	cout << "Rand si loc: ";
	cin >> row >> col;

	if (rooms[roomIndex].reserveSeat(row, col)) {
		reservations.emplace_back(rooms[roomIndex].name,movies[movieIndex].title,movies[movieIndex].showTimes[timeIndex],row, col);
		double cost = 25.0; // momentan fix
		if (Payment::processPayment(cost)) {
			Visuals::PaymentAnimation();
			cout << "\nPlata a fost efectuata cu succes!\n";
		}
		else {
			cout << "EROARE! PLATA ESUATA!\n";
		}
	}
}
void CinemaReservationSystem::viewReservations() {
	cout << "Rezervarile dumneavoastra:\n";
	cout << "\n";
	for (int numarul_rezervarii=0;numarul_rezervarii<reservations.size();numarul_rezervarii++)
	{
		reservations[numarul_rezervarii].displayReservation(numarul_rezervarii);
	}
}