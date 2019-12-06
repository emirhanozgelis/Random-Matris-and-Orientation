#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));
	int diziBoyutu=1;
	int indis = 1;
	char karakterDeger;
	cout << "Dizi boyutunu giriniz : ";
	cin >> diziBoyutu;

	int dizi[diziBoyutu];
	for (int i = 0; i<diziBoyutu; i++) {
		dizi[i] = rand() % 10;
	}
	do {
		cout << "--> ";
		for (int i = 0; i<indis; i++) {
			cout << dizi[i] << endl;
			cout << "    ";
		}
		cout << endl << "(a veya A tusu asagi goturur)" << endl;
		cout << "(d veya D tusu yukari goturur)" << endl;
		cout << "(c veya C tusu programdan cikarir)" << endl;
		cout << "Okun yonunu secin : ";
		cin >> karakterDeger;
		if (karakterDeger == 'a' || karakterDeger == 'A') {
			if (indis<diziBoyutu)
				indis++;
		}
		else if (karakterDeger == 'd' || karakterDeger == 'D') {
			if (indis != 1)
				indis--;
		}
	} while (karakterDeger != 'c' && karakterDeger != 'C');
	return 0;
}
