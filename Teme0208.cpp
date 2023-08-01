//De facut : 10X , 3077X , 65X , 3078X , 4373 , 376 , 3663 , 4329 , 1453 , 159



#include <iostream>
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



int notaZece() {
                                           //Problema 4373 - Nota Zece ???
    int a, b, note = 0, A, B;
    cin >> a >> b;
    A = a;
    B = b;
    while (a != b) {
        if (a < b) {
            a = a + A;
            note++;
        }
        else if (a > b) {
            b = b + B;
            note++;
        }
    }
    return note;
}
































int main(){
    
 
    cout << notaZece();











    return 0;

}

