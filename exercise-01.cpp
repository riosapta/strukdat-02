/*Exercise-01
Nama : Rio Sapta Samudera
NPM  : 140810180030
Deskripsi: Struct
*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct Orang {
	int umur;
	char nama[30];
	char jk[1];
	char goldar[1];
};

int main()
{
	Orang orang;
	orang.umur = 10;
	strcpy(orang.nama, "fahmi");
	strcpy(orang.jk, "L");
	strcpy(orang.goldar, "O");
	cout << orang.umur << endl;
	cout << orang.nama << endl;
	cout << orang.goldar << endl;
	cout << orang.jk << endl;
}
