#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/// CLASA MOVIE pentru filme
class Movie
{
public:
	string title;
	vector<string>showTimes;
	Movie(string title, vector<string>times) : title(title), showTimes(times) {}
	void displayShowTimes();
};

