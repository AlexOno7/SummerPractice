#include <iostream>
using namespace std;

//Problema 3979 - Suma 37 X
int sumaCifre() {
	int n, S = 0;
	cin >> n;
	while (n != 0) {
		if (n % 10 >= 3 && n % 10 <= 7) {
			S += n % 10;
		}
		n /= 10;
	}
	return S;
}


//Problema 66 - Numarul de cifre X
int numCifre() {
	int n, nrCif = 0;
	cin >> n;
	if (n == 0) {
		return 1;
	}
	while (n != 0) {
		n /= 10;
		nrCif++;
	}
	return nrCif;
}



//Problema 68 -	Cifra Maxima X
int cifMax() {
	int n, aux = 0;
	cin >> n;
	while (n != 0) {
		if (aux < n % 10) {
			aux = n % 10;
		}
		n /= 10;
	}
	return aux;
}




int main1() {

	cout << cifMax();
	return 0;
}