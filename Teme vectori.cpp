#include <iostream>
using namespace std;

//Problema 4382 - Inlocuire 5 X
int inlocuire() {
	int n, v[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		bool ok = true;
		for (int j = 2; j * j <=v[i]; j++) {
			if(v[i]%j==0){
				ok = false;
			}
		}
		if (ok) {
			v[i] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	return 0;
}


//Problema 489 - Afisare 1  X
int afisare() {
	int n, v[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i <= n/2; i++) {
		if (i < n - 1 - i) {
			cout << v[i] << " " << v[n - 1 - i] << " ";
		}
		else if (i==n-1-i){
			cout << v[i];
		}
	}
	return 0;
}



//Problema 490 - Afisare Min Max X
int afisareMinMax() {
	int n, v[1000], aux=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int min = v[0], max = v[0], pozMax = 0, pozMin = 0;
	for (int i = 1; i < n; i++) {
		if (min > v[i]) {
			min = v[i];
		}
		if (max < v[i]) {
			max = v[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (v[i] == min) {
			pozMin = i;
		}
		if (v[i] == max) {
			pozMax = i;
		}
	}
	if (pozMin > pozMax) {
		aux = pozMin;
		pozMin = pozMax;
		pozMax = aux;
	}
	for (int i = pozMin; i <= pozMax; i++) {
		cout << v[i] << " ";
	}
	return 0;
}



//Tema 16.08
//Problema 492 - Numarare 3 X
int numarare() {
	int n, v[200], nrPerechi = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n/2; i++) {
		while (v[i] != v[n - i - 1]) {
			if (v[i] > v[n - i - 1]) {
				v[i] -= v[n - i - 1];
			}
			else if (v[i] < v[n - i - 1]) {
				v[n - i - 1] -= v[i];
			}
		}
		if (v[i] == 1 && v[n - i - 1] == 1) {
			nrPerechi++;
		}
	}
	return nrPerechi;
}



//Problema 498 - NumararePIE X
int numPie() {
	int n, v[200], auxI, auxJ, perechi = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			auxI = v[i];
			auxJ = v[j];
			while (auxI != auxJ) {
				if (auxI > auxJ) {
					auxI -= auxJ;
				}
				else if (auxI < auxJ) {
					auxJ -= auxI;
				}
			}
			if (auxI == 1 && auxJ == 1) {
				perechi++;
			}
		}
	}
	return perechi;
}



//Problema 4380 - Numarare Perechi 1 X
int numPer() {
	int n, v[200], auxI, auxJ, perechi = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			auxI = v[i];
			auxJ = v[j];
			while (auxI != 0 && auxJ != 0) {
				if (auxI / 10 % 10 == auxJ / 10 % 10) {
					perechi++;
					auxI = 0;
				}
				else {
					auxI = 0;
				}
			}
		}
	}
	return perechi;
}



//Problema 4105 - NumarareDiv X
int numDiv() {
	int n, v[1000],nrDiv=0, w[1000], perechi = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		for (int j = 1; j * j <= v[i]; j++) {
			if (v[i] % j == 0) {
				if (j != v[i] / j) {
					nrDiv += 2;
				}
				else if (j == v[i] / j) {
					nrDiv++;
				}
			}
		}
		w[i] = nrDiv;
		nrDiv = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (w[i] == w[j]) {
				perechi++;
			}
		}
	}
	return perechi;
}



//Problema 4110 - NumarareSD ??? 80 pct
int numSumDiv() {
	int n, v[1000], w[1000], sum = 0, perechi = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		for (int j = 1; j * j <= n; j++) {
			if (v[i] % j == 0) {
				if (j != v[i] / j) {
					sum += j + v[i] / j;
				}
				else if (j == v[i] / j) {
					sum += j;
				}
			}
		}
		w[i] = sum;
		sum = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (w[i] == w[j]) {
				perechi++;
			}
		}
	}
	return perechi;
}



//Problema 499 - Numarare 5 X
int numSumCif() {
	int n, v[200], w[200], sumCif = 0, perechi = 0, aux;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		aux = v[i];
		while (aux != 0) {
			sumCif += aux % 10;
			aux /= 10;
		}
		w[i] = sumCif;
		sumCif = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (w[i] == w[j]) {
				perechi++;
			}
		}
	}
	return perechi;
}



//Problema 1860 - BlackFriday ??
int blackFriday() {
	return 0;
}



//Problema 494 - Constr1 ?? 20 pct
void constr() {
	int n, x[200], y[200], sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (x[j] != x[i]) {
				sum += x[j];
			}
		}
		y[i] = sum;
		sum = 0;
	}
	for (int i = 0; i < n; i++) {
		cout << y[i] << " ";
	}
}




















int main() {

	constr();


	return 0;
}



