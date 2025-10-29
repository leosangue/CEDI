#include <iostream>
using namespace std;

int main() {
    long long n;
    cout<<"Ingrese un numero entero positivo: ";
    cin >> n;
    long long count = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            count++;
            if (i != n / i) {
                cout << n / i << " ";
                count++;
            }
        }
    }
    cout << "\nCantidad de divisores: " << count << endl;
    return 0;
}
