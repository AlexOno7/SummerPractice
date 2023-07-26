
#include <iostream>

using namespace std;

int main() {
    
    //1
    cout << "Boosted" << endl;




    //2
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;




    //3
    int A[5] = { 0,1,2,3,4 };
    cout << A[0] << " " << A[4] << endl;
    



    //4
    int n, min=1000, max=1;
    cin >> n;
    int B[1001];
    for (int i = 0; i < n;i++) {
        cin >> B[i];  
    }

    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        if (B[i] < min) {
            min = B[i];
        }

        if (B[i] > max) {
            max = B[i];
        }

        
    }
    
    cout << min << " " << max;

    return 0;
}