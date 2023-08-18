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

//Tema 16.08
// Problema 3932 - Sterge zerouri X
int stergeZero() {
	int n;
	cin >> n;
	while (n % 10 == 0) {
		n /= 10;
	}
	return n;
}



// Problema 3665 - cmmcp  X
int cmmcp() {
	long long n, aux;
	int cif = 0, cifMax = -1;
	cin >> n;
	if (n == 0) {
		return n;
	}
	aux = n;
	while (aux != 0) {
		cif = aux % 10;
		if (cif % 2 == 0 && cif > cifMax) {
			cifMax = cif;
		}
		aux /= 10;
	}
	if (cifMax < 0) {
		return 10;
	}
	return cifMax;
}




//Problema 3667 - CifraMaxImp X
int cifraMaxImp() {
	int n, v[100], nr = 0, cif = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for(int i=0;i<n;i++){
		while (v[i] != 0) {
			if (v[i] % 10 > cif) {
				cif = v[i] % 10;
			}
			v[i] /= 10;
		}
		if (cif % 2 == 1) {
			nr++;
		}
		cif = 0;
	}
	return nr;
}


//Problema 2288 - Cifra Impara Maxima X
int cifImpMax() {
	int n, cif = 0;
	cin >> n;
	while (n != 0) {
		if (n % 10 % 2 == 1&&n%10>cif) {
			cif = n % 10;
		}
		n /= 10;
	}
	if (cif == 0) {
		cout << "nu exista";
	}
	else{
		cout << cif;
	}
	return 0;
}


//Problema 4231 - Mingx X
int minx() {
	long long n;
	int x, cif = 10;
	cin >> n >> x;
	while (n != 0) {
		if (n % 10 < cif && n % 10 > x) {
			cif = n % 10;
		}
		n /= 10;
	}
	if (cif == 10) {
		return -1;
	}
	else {
		return cif;
	}
}



//Problema 3620 - Cmmk X
void cmmk() {
	long long n;
	int k;
	bool maiMare = false;
	cin >> n >> k;
	while (n != 0) {
		if (n % 10 > k) {
			maiMare = true;
		}
		n /= 10;
	}
	if (maiMare) {
		cout << "NU";
	}
	else {
		cout << "DA";
	}
}



//Problema 3254 - Prod Pi X
int prodPi() {
	int n, cifImpMin = 10, cifParMax = 0, P = 0;
	cin >> n;
	while (n != 0) {
		if (n % 10 % 2 == 0 && n % 10 > cifParMax) {
			cifParMax = n % 10;
		}
		else if (n % 10 % 2 == 1 && n % 10 < cifImpMin) {
			cifImpMin = n % 10;
		}
		n /= 10;
	}
	P = cifImpMin * cifParMax;
	return P;
}



//Problema 4221 - Bune X
void nrBune() {
	int a, b, c, minA = 9, minB = 9, maxA = 0, maxB = 0;
	cin >> a >> b;
	while (a != 0) {
		if (a % 10 < minA) {
			minA = a % 10;
		}
		if (a % 10 > maxA) {
			maxA = a % 10;
		}
		a /= 10;
	}
	while (b != 0) {
		if (b % 10 < minB) {
			minB = b % 10;
		}
		if (b % 10 > maxB) {
			maxB = b % 10;
		}
		b /= 10;
	}
	if (minA == maxA&&minA==maxB) {
		c = minA;
		cout << c;
	}
	if (minA == maxB) {
		c = minA;
		cout << c;
	}else if (minB == maxA) {
		c = maxA;
		cout << c;
	}
	if (minA != maxB && minB != maxA) {
		cout << "NU";
	}
}







int main() {
	
	int v[100][100], n, m, S = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
			if (v[i][j] % 2 == 0) {
				S += v[i][j];
			}
		}
	}
	cout << S;














	return 0;
}





