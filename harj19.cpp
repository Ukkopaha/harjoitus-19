/**********************************************
* Paulus Linna
* IIA14SB
*
* Teht‰v‰kuvaus:
*
*	Tee ohjelma, joka toimii auton nopeusmittarina.
*	Periaate on seuraava: N‰pp‰imist‰ toimii
*	nopeusanturina ja n‰ytt‰ mittarin n‰ytt‰n‰.
*	Nopeusmittari laskee viiden viimeisen nopeuden
*	keskiarvon ja tulostaa sen nykyisen‰ nopeutena
*	n‰yt‰lle. Negatiivinen nopeus lopettaa ohjelman.
*	Toiminta on siis seuraava:
*	Ohjelman kaynnistyksessa mittari n‰ytt‰‰ nolla
*	0
*	0
*	0
*	0
*	0 (alkutila) nopeus = 0 km/h
*	Anna nopeus: 10 => 2 km/h
*	Anna nopeus: 20 => 6 km/h
*	Anna nopeus: 30 => 12 km/h
*	Anna nopeus: 40 => 20 km/h
*	Anna nopeus: 50 => 30 km/h
*	Anna nopeus: 50 => 38 km/h
*	Anna nopeus: 50 => 44 km/h
*	Anna nopeus: 50 => 48 km/h
*	Anna nopeus: 50 => 50 km/h
*	Anna nopeus: 50 => 50 km/h
*	Anna nopeus: -5 => loppu
*
*	Toteuta kayttaen taulukkoa.
*
* P‰iv‰m‰‰r‰: 13.11.2014
* Versio 1.0
************************************************/



#include <iostream>
using namespace std;

void main()
{

	int nopeus[5] { 0, 0, 0, 0, 0 };
	int ind;
	int mittari;

	cout << nopeus[0] << endl << nopeus[1] << endl << nopeus[2] << endl << nopeus[3] << endl << nopeus[4];

	for (ind = 0; ; ind++)
	{
		if (ind == 5){ ind = 0; }
		mittari = (nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4])/5;

		cout << " => " << mittari << "km/h" << endl;
		cout << "Anna nopeus: ";
		cin >> nopeus[ind];
		if (nopeus[ind] < 0){ break; }

	}

}