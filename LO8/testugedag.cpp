#include <iostream>
#include "ugedagsfunktion.h"
using namespace std;

int main() {
    int dagNummer;
    
    cout << "Indtast et tal mellem 1 og 7: ";
    cin >> dagNummer;
    
    string dagNavn = ugedag(dagNummer);
    cout << "Dag " << dagNummer << " er: " << dagNavn << endl;
    
    return 0;
}