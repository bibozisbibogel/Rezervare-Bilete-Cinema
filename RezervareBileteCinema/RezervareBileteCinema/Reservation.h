#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


/// Clasa RESERVATION pentru gestionarea rezervarilor
class Reservation {
public:
	string movieRoom;
	string movieTitle;
	string showTime;
	int seatRow;
	int seatCol;
	Reservation(string room, string title, string time, int row, int col) : movieRoom(room), movieTitle(title), showTime(time), seatRow(row), seatCol(col) {}
	void displayReservation(int& numarul_rezervarii);

};
