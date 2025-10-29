#include <iostream>
using namespace std;

int main() {
    double pastel = 100.0;
    double maxPedazo = 0.0;
    int personaMax = 0;

    for (int i = 1; i <= 100; i++) {
        double pedazo = (i / 100.0) * pastel;
        cout << "Persona " << i << " recibe " << pedazo << " kg" << endl;
        if (pedazo > maxPedazo) {
            maxPedazo = pedazo;
            personaMax = i;
        }
        pastel -= pedazo;
    }

    cout << "\nLa persona que recibe el pedazo más grande es la " << personaMax
         << " con " << maxPedazo << " kg." << endl;

    return 0;
}
