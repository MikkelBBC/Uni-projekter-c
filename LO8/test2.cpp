/*
 * ============================================================================
 * Program: Bogstavtæller
 * Beskrivelse: Tæller hvor mange gange hvert bogstav forekommer i en tekst
 * Forfatter: [Dit navn]
 * Dato: 10/10/2025
 * ============================================================================
 */

#include <iostream>  // For input/output (cout, cin)
#include <string>    // For at arbejde med strings
#include <map>       // For at gemme bogstav-antal par (key-value pairs)
#include <cctype>    // For isalpha() og tolower() funktioner

using namespace std;

/**
 * main() - Programmets startpunkt
 * 
 * Funktionalitet:
 * 1. Læser input fra brugeren (ord eller sætning)
 * 2. Tæller alle bogstaver (ignorerer store/små forskelle)
 * 3. Viser hvilke bogstaver der gentages
 * 4. Viser komplet oversigt over alle bogstaver
 * 
 * @return 0 hvis programmet kører succesfuldt
 */


int main() {
    string tekst;
    // ========== DEL 1: INPUT ==========
      // Variabel til at gemme brugerens input
    
    cout << "Skriv et ord eller en sætning: ";
    getline(cin, tekst);  // Læser hele linjen (inkl. mellemrum)
    
    
    
    // ========== DEL 2: TÆLLING ==========
    /**
     * Map struktur: bogstavTaeller
     * Key (char):     Bogstavet (a-z)
     * Value (int):    Antal gange det forekommer
     * Eksempel:       {'a' => 3, 'b' => 1, 'c' => 2}
     */
    map<char, int> bogstavTaeller;
    
    // Loop gennem hver karakter i teksten
    for (char c : tekst) {
        // Tjek om karakteren er et bogstav (A-Z eller a-z)
        if (isalpha(c)) {
            // Konverter til lille bogstav så 'A' og 'a' tælles som samme
            char lavt = tolower(c);
            
            // Tilføj 1 til tælleren for dette bogstav
            // Hvis bogstavet ikke findes, oprettes det automatisk med værdi 0
            bogstavTaeller[lavt]++;
        }
        // Alle andre tegn (tal, mellemrum, specialtegn) ignoreres
    }
    
    
    // ========== DEL 3: VISNING AF GENTAGNE BOGSTAVER ==========
    cout << "\n=== Bogstavoptælling ===" << endl;
    cout << "Gentagne bogstaver:\n" << endl;
    
    // Flag til at holde styr på om der er nogen gentagne bogstaver
    bool harGentagne = false;
    
    /**
     * Loop gennem map'en
     * 'auto' gør at C++ automatisk finder den rigtige type
     * 'par' indeholder både key (par.first) og value (par.second)
     * par.first  = bogstavet (char) 
     * par.second = antal (int)
     */
    for (auto par : bogstavTaeller) {
        // Hvis bogstavet forekommer mere end 1 gang
        if (par.second > 1) {
            cout << "'" << par.first << "' forekommer " 
                 << par.second << " gange" << endl;
            harGentagne = true;  // Mindst 1 gentaget bogstav fundet
        }
    }
    
    // Hvis ingen bogstaver gentages
    if (!harGentagne) {
        cout << "Ingen bogstaver gentages!" << endl;
    }
    
    
    // ========== DEL 4: KOMPLET OVERSIGT ==========
    cout << "\nAlle bogstaver:" << endl;
    
    // Loop gennem alle bogstaver igen (inkl. dem der kun er der 1 gang)
    for (auto par : bogstavTaeller) {
        cout << "'" << par.first << "' = " << par.second;
        
        // Grammatik: Brug "gang" for 1, "gange" for flere
        if (par.second == 1) {
            cout << " gang";
        } else {
            cout << " gange";
        }
        cout << endl;
    }
    
    return 0;  // Indikerer at programmet kørte succesfuldt
}