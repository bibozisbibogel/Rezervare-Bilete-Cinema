#include "Reservation.h"
using namespace std;
void Reservation::displayReservation(int& numarul_rezervarii) {
	cout << "Rezervare"<<numarul_rezervarii<<":"<< " Sala: " << movieRoom <<", Film : " << movieTitle << ", Ora : " << showTime << ", Rand : " << seatRow << ", Loc : " << seatCol << '\n';
}