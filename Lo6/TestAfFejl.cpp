#include <iostream>
using namespace std;

int main() {
    cout << "=== Test af Return-koder ===" << endl;
    
    int tal;
    cout << "Indtast et tal mellem 1 og 10: ";
    cin >> tal;
    
    if (tal < 1) {
        cout << "FEJL: Tallet er for lille!" << endl;
        return 1;  // Fejlkode 1
    }
    
    if (tal > 10) {
        cout << "FEJL: Tallet er for stort!" << endl;
        return 2;  // Fejlkode 2
    }
    
    cout << "PERFEKT! Dit tal " << tal << " er i det rigtige interval." << endl;
    return 0;  // Success
}