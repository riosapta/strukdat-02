/*Exercise-02
Nama : Rio Sapta Samudera
NPM  : 140810180030
Deskripsi: Struct
*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Theater {
	int room;
	char seat[3];
	char movieTitle[30];
};

int main() {
	Theater theater;
	cin >> theater.room;
	cin >> theater.seat;
	cin.ignore();
	cin.getline(theater.movieTitle,30);
	cout << theater.room << endl;
	cout << theater.seat << endl;
	cout << theater.movieTitle << endl;
}
