#pragma once
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
#include <windows.h>
class Visuals
{
	public:
		string nume;
		string parola;
		static void PaymentAnimation();
		static void StartAnimation(string& nume, string& parola);
		static void Greetings(string nume);
		static void NumberOfReservations(int& reservations);
};

