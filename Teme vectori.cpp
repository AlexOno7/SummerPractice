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


//Problema 489 - Afisare 1



















//Problema 490 - Afisare Min Max

















int main() {

	inlocuire();
}