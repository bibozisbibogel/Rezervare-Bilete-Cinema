#include "Cinema.h"

bool Cinema::isSeatAvailable(int row, int col) {
	return seats[row][col] == 0;
}
bool Cinema::reserveSeat(int row, int col)
{
	if (isSeatAvailable(row, col))
	{
		seats[row][col] = 1;
		cout << "Locul a fost rezervat cu succes!\n";
		return true;
	}
	else
	{
		cout << "EROARE!  LOC DEJA OCUPAT!\n";
		return false;
	}
}
void Cinema::displaySeats() {
	cout << "Starea locurilor din sala:\n";
	for (auto& row : seats)
	{
		for (auto& seat : row)
		{
			if (seat == 0)
				cout << "[LIBER] ";
			else
				cout << "[OCUPAT] ";
		}
		cout << '\n';
	}
}