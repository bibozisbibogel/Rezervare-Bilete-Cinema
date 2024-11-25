#include "Room.h"
using namespace std;
bool Room::isSeatAvailable(int row, int col) {
    return seats[row][col] == 0;
}
bool Room::reserveSeat(int row, int col) {
    if (isSeatAvailable(row, col)) {
        seats[row][col] = 1;
        cout << "Locul a fost rezervat cu succes in sala: " << name << "!\n";
        return true;
    }
    else {
        cout << "EROARE! LOC DEJA OCUPAT IN SALA: " << name << "!\n";
        return false;
    }
}
void Room::displaySeats() {
    cout << "Starea locurilor din sala " << name << ":\n";
    for (auto& row : seats) {
        for (auto& seat : row) {
            if (seat == 0)
                cout << "[LIBER] ";
            else
                cout << "[OCUPAT] ";
        }
        cout << '\n';
    }
}
