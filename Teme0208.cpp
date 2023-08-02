//De facut : 10X , 3077X , 65X , 3078X , 4383X , 376X , 3663X , 4329X , 1453X , 159?



#include <iostream>
#include <cmath>
using namespace std;

int sum() {
                                 //Problema 10 - Suma cifrelor    
    int nr, sum = 0;
    cin >> nr;
    while (nr != 0) {
        sum = sum + nr % 10;
        nr = nr / 10;
    }
    return sum;
}



int sumPrefixe() {
                                //Problema 3077 - Suma Prefixe
    int nr, sum = 0;
    cin >> nr;
    while (nr != 0) {
        sum = sum + nr;
        nr = nr / 10;
    }
    return sum;


}



int prodCifreImpare() {
                                         //Problema 65 - Produs Cifre Impare
    int nr, prod = 1, valid = 0;
    cin >> nr;
    while (nr != 0) {
        if (nr % 2 != 0) {
            prod = nr % 10 * prod;
            nr = nr / 10;
            valid++;
        }
        else {
            nr = nr / 10;
        }
    }
    if (valid == 0) {
        cout << -1;
    }
    else {
        return prod;
    }
}



int prodK() {
                                            //Problema 3078 -    Prod K
    int nr, k, prod = 1, valid = 0;
    cin >> nr >> k;
    while (nr != 0) {
        if (nr % 10 != k) {
            prod = nr % 10 * prod;
            nr = nr / 10;
            valid++;
        }
        else {
            nr = nr / 10;
        }
    }
    if (valid == 0) {
        return 0;
    }
    else {
        return prod;
    }
}







bool verificare(int a) {
    bool prim;
    for (int i = 2; i * i < a; i++) {
        if (a % i == 0) {
            return false;
        }
        else {
            return true;
        }
    }
}


void Inlocuire() {
                                            //Problema 4383 - Inlocuire 6
    int n, v[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = n-1;i>=0;i--){
        if (verificare(v[i])) {
            v[i] = 0;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i]<<" ";
    }
}














int sumDiv() {
                                         //Problema 376 - Suma Divizori
    int nr;
    long long sum = 0;
    cin >> nr;
    for (int i =1;i*i<=nr;i++){
        if (nr % i == 0){
            if (i == nr / i) {
                sum = sum + i;
            }
            else if(i!=nr/i){
                sum = sum + i + nr / i;
            }
        }
    }
    return sum;
}



int ppdp() {
                                         //Problema 3663 - ppdp
    int n, square=0;
    cin >> n;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            square = i * i;
            return square;
            break;
        }
    }
}



int divizori() {
                                      //Problema 4329 - Divizori 6
    int n, sum = 0, minDiv = 0, maxDiv = 0;
    cin >> n;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            minDiv = i;
            maxDiv = n / i;
            sum = minDiv + maxDiv;
            return sum;
            break;
        }
    }
}




int stergere() {
                                            //Problema 1453 - Stergere 1
    int n, X[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }
    for (int i = 0; i < n; i++) {
        if (X[i] % 2 != 0) {
            cout << X[i] << " ";
        }
    }
    return 0;
}



int inserare() {
                                            //Problema 159 - Inserare Dupa ??
    int n, X[25];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }
    for (int i = 0; i < n; i++) {
        if (X[i] % 2 == 0) {
        }
    }
    return 0;
}























int main(){
    
 
    Inlocuire();











    return 0;

}

