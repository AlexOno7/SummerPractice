#include <iostream>
using namespace std;

//Problema 387 - Suma divizorilor impari X
int sumDivImp() {
	int n;
	long long sum = 0;
	cin >> n;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (i % 2 == 1) {
				sum += i;
			}
			if ((n / i) % 2 == 1) {
				sum += n / i;
			}
			if (n / i == i && i % 2 == 1) {
				sum -= i;
			}
		}
	}
	return sum;
}



//Problema 3270 - Suma divizorilor pari X
int sumDivPar() {
	int n;
	long long sum = 0;
	cin >> n;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (i % 2 == 0) {
				sum += i;
			}
			if (n / i % 2 == 0) {
				sum += n / i;
			}
			if (n / i == i && i % 2 == 0) {
				sum -= i;
			}
		}
	}
	return sum;
}



//Problema 388 - Numarul Divizorilor Pari X
int nrDivPari() {
	int n, nrDiv = 0;
	cin >> n;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (i % 2 == 0) {
				nrDiv++;
			}
			if (n / i % 2 == 0) {
				nrDiv++;
			}
			if (n / i == i && i % 2 == 0) {
				nrDiv--;
			}
		}
	}
	return nrDiv;
}






int main2() {

	cout << nrDivPari();
	return 0;
}