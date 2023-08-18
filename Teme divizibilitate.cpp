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



//Tema 16.08
//Problema 1568 - MedieDiv X
void medieDiv() {
	long long n, nrDiv = 0, x;
	float s = 0;
	cin >> n;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (i == n / i) {
				s += i;
				nrDiv++;
			}
			else {
				s += i + (n / i);
				nrDiv += 2;
			}
		}
	}
	s /= nrDiv;
	x = s * 100;
	cout << x / 100 << "." << x / 10 % 10 << x % 10;
}



//Problema 389 - Divizori Pari Interval ???
int intvervalDiv() {
	int a, b, nrDiv = 0, nrMin = 0, nrMax = 0, x = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		for (int j = 1; j * j <= i; j++) {
			if (i % j == 0&&j%2==0) {
				if (j == i / j) {
					nrDiv ++;
				}
				else {
					nrDiv += 2;
				}
			}
		}
		if (nrDiv > x) {
			x = nrDiv;
		}
		nrDiv = 0;
	}
	return 0;
}



//Problema 4330 - Divizori 7 ???
int sumDivProprii() {
	int n, div, sum = 0, ok = 0;
	cin >> n;
	for (int i = 2; i <= n/2; i++) {
		if (n % i == 0&&i!=n/i) {
			div = i;
			ok++;
			sum += div;
		}
		if (ok == 2) {
			return sum;
		}
	}
}



//Problema 408 - Divizorii Oglinditului X
int nrDivOglindit() {
	int n, nrDiv = 0, ogl=0;
	cin >> n;
	while (n != 0) {
		ogl = ogl * 10 + n % 10;
		n /= 10;
	}
	for (int i = 1; i * i <= ogl; i++) {
		if (ogl % i == 0) {
			if (i != ogl / i) {
				nrDiv += 2;
			}
			else if (i == ogl / i) {
				nrDiv++;
			}
		}
	}
	return nrDiv;
}



//Problema 3272 - SumDivOgl ?? 80pct
int sumDivOgl() {
	int n, nr, sum = 0, ogl = 0;
	cin >> n;
	while (n != 0) {
		cin >> nr;
		while (nr != 0) {
			ogl = ogl * 10 + nr % 10;
			nr /= 10;
		}
		for (int i = 1; i * i <= ogl; i++) {
			if (ogl % i == 0) {
				if (i == ogl / i) {
					sum += i;
				}else if(i!=ogl/i){
					sum += ogl / i + i;
				}
			}
		}
		ogl = 0;
		n--;
	}
	return sum;
}



//Problema 64 - NumarPerfect X
void nrPerf() {
	long long n;
	int sum = 0;
	cin >> n;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			if (i != n / i) {
				sum += i + n / i;
			}
			else if (i == n / i) {
				sum += i;
			}
		}
	}
	if (2 * n == sum) {
		cout << n << " " << "este perfect";
	}
	else {
		cout << n << " " << "nu este perfect";
	}
}



//Problema 445 - PseudoPerfect X
void pseudoPerf() {
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0){
			if (i != n / i) {
				sum += i + n / i;
			}
			else if (i == n / i) {
				sum += i;
			}
		}
	}
	if (sum % n == 0) {
		cout << "DA";
	}
	else {
		cout << "NU";
	}
}



//Problema 1574 - Prietene X
void prieten() {
	int nr1, nr2, sumDivNr1 = 1, sumDivNr2 = 1;
	cin >> nr1 >> nr2;
	for (int i = 2; i * i <= nr1; i++) {
		if (nr1 % i == 0) {
			if (i != nr1 / i) {
				sumDivNr1 += i + nr1 / i;
			}
			else if (i == nr1 / i) {
				sumDivNr1 += i;
			}
		}
	}
	for (int i = 2; i * i <= nr2; i++) {
		if (nr2 % i == 0) {
			if (i != nr2 / i) {
				sumDivNr2 += i + nr2 / i;
			}
			else if (i == nr2 / i) {
				sumDivNr2 += i;
			}
		}
	}
	if (nr1 == sumDivNr2 && nr2 == sumDivNr1) {
		cout << "PRIETENE";
	}
	else {
		cout << "NU SUNT PRIETENE";
	}
}



















