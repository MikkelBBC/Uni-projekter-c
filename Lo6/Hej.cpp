#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main() {
    string tekst;
    
    cout << "Skriv et ord eller en sætning: ";
    getline(cin, tekst);
    
    // Map til at holde styr på antal af hvert bogstav
    map<char, int> bogstavTaeller;
    
    // Tæl hver karakter (ignorerer store/små bogstaver)
    for (char c : tekst) {
        if (isalpha(c)) { // Kun bogstaver
            char lavt = tolower(c); // Konverter til lille bogstav
            bogstavTaeller[lavt]++;
        }
    }
    
    // Vis resultater
    cout << "\n=== Bogstavoptælling ===" << endl;
    cout << "Gentagne bogstaver:\n" << endl;
    
    bool harGentagne = false;
    
    for (auto par : bogstavTaeller) {
        if (par.second > 1) {
            cout << "'" << par.first << "' forekommer " << par.second << " gange" << endl;
            harGentagne = true;
        }
    }
    
    if (!harGentagne) {
        cout << "Ingen bogstaver gentages!" << endl;
    }
    
    // Vis alle bogstaver (inkl. dem der kun forekommer én gang)
    cout << "\nAlle bogstaver:" << endl;
    for (auto par : bogstavTaeller) {
        cout << "'" << par.first << "' = " << par.second;
        if (par.second == 1) {
            cout << " gang";
        } else {
            cout << " gange";
        }
        cout << endl;
    }
    
    return 0;
}