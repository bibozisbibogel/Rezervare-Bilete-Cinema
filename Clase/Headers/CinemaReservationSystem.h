#pragma once
#include "Movie.h"
#include "Cinema.h"
#include "Room.h"
#include "User.h"
#include "Payment.h"
#include "Visuals.h"
using namespace std;

/// Clasa principala CINEMARESERVATIONSYSTEM pentru gestionarea TUTUROR functionalitatilor
class CinemaReservationSystem {
private:
    unordered_map<string, User> users;
    vector<Movie> movies;
    vector<Room> rooms; 
    Cinema cinema;
    vector<Reservation>reservations;
public:
    CinemaReservationSystem(); 
    void signup(string nume, string parola);
    bool login(string nume, string parola);
    void logout(string nume);
    void showMovies();
    void makeReservation(string nume);
    void viewReservations();
    void readMoviesFromFile(const string& file_name); 
    void readRoomsFromFile(const string& file_name);  
};
