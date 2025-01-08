#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

/// CLASA CINEMA pentru gestionarea locurilor
class Cinema {
private:
	vector<vector<int>>seats;
public:
	Cinema(int rows, int cols) : seats(rows, vector<int>(cols, 0)) {}

	bool isSeatAvailable(int row, int col);
	bool reserveSeat(int row, int col);
	void displaySeats();
};

