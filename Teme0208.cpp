//De facut : 10 , 3077 , 65 , 3078 , 4373 , 376 , 3663 , 4329 , 1453 , 159



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




















int main(){
    
 
    cout << sum();











    return 0;

}

