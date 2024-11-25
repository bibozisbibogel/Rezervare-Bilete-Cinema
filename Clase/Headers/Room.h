#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
/// Clasa ROOM pentru gestionarea salilor
class Room {
public:
    string name;
    vector<vector<int>> seats;
    Room(string name, int rows, int cols) : name(name), seats(rows, vector<int>(cols, 0)) {}
    bool isSeatAvailable(int row, int col);
    bool reserveSeat(int row, int col);
    void displaySeats();
};
