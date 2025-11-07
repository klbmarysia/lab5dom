// lab5dom.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

#include <cstdlib>
int main() {
	int tab[10];
	double srednia = 0;

	for (int i = 0; i < 10; i++) {
		tab[i] = rand() % 100;
	}
	for (int k = 0; k < 10; k++) {
		cout << tab[k] << endl;
		srednia = tab[k] + srednia;
	}
	/**srednia = srednia / 10;
	cout << srednia << endl;
	int a = 0;
	for (int n = 0; n < 10; n++) {
		if (tab[n] < srednia) {
			a++;
		}
	}
	cout << "jest " << a << "liczb mniejszych od sredniej" << endl;*/
	int max = tab[0];
	for (int n = 0; n < 10; n++) {
		if (tab[n] > max) {
			max = tab[n];

		}
	}
	cout << "najwieksza warosc wynosi " << max << endl;
	int min = tab[0];
	for (int m = 0; m < 10; m++) {
		if (tab[m] < min) {
			min = tab[m];
		}
	}
	cout << "najmneijsza wartosc wynosi " << min << endl;
}