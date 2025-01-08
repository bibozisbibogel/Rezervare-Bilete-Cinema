#include "Movie.h"
using namespace std;

/// CLASA MOVIE pentru filme

//Movie(string title, vector<string>times) : title(title), showTimes(times) {}
void Movie::displayShowTimes(){
	cout << "Ore disponibile pentru " << title << " (Indexarea se face de la 0):\n";
	int time_position = 0;
	for (auto& time : showTimes)
		cout << time_position++<<". "<<time << "\n";
	cout << '\n';
}