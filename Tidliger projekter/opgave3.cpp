#include <iostream>
#include <string>
using namespace std;

// Opgave 3: Søvn
void opgave3_sovn() {
    cout << "\n=== OPGAVE 3: SØVN ===" << endl;
    
    int alder;
    char koen;
    double timer_sovn;
    
    cout << "Indtast din alder: ";
    cin >> alder;
    
    cout << "Indtast dit køn (M/K): ";
    cin >> koen;
    
    cout << "Hvor mange timer søvn har du fået i nat? ";
    cin >> timer_sovn;
    
    int anbefalet_sovn;
    
    // Bestem anbefalet søvn baseret på alder
    if (alder < 18) {
        anbefalet_sovn = 8;
    } else if (alder >= 18 && alder <= 64) {
        anbefalet_sovn = 7;
    } else {  // 65 år eller mere
        anbefalet_sovn = 6;
    }
    
    // Kontroller om personen har fået nok søvn
    if (timer_sovn >= anbefalet_sovn) {
        cout << "Du har fået nok søvn!" << endl;
    } else {
        cout << "Du har fået for lidt søvn!" << endl;
    }
}

// Opgave 4: Kalorieindtag
void opgave4_kalorier() {
    cout << "\n=== OPGAVE 4: KALORIEINDTAG ===" << endl;
    
    char koen;
    int kalorier;
    
    cout << "Indtast dit køn (M/K): ";
    cin >> koen;
    
    cout << "Indtast dit daglige kalorieindtag: ";
    cin >> kalorier;
    
    int nedre_graense, ovre_graense;
    
    // Bestem grænser baseret på køn
    if (koen == 'K' || koen == 'k') {
        nedre_graense = 1500;
        ovre_graense = 2000;
    } else if (koen == 'M' || koen == 'm') {
        nedre_graense = 2000;
        ovre_graense = 2500;
    }
    
    // Vurder kalorieindtaget
    if (kalorier < nedre_graense) {
        cout << "Du har spist for lidt" << endl;
    } else if (kalorier >= nedre_graense && kalorier <= ovre_graense) {
        cout << "Du har spist en passende mængde" << endl;
    } else {
        cout << "Du har spist for meget" << endl;
    }
}

// Opgave 5: Væskebalance
void opgave5_vaeskebalance() {
    cout << "\n=== OPGAVE 5: VÆSKEBALANCE ===" << endl;
    
    char koen;
    double liter_vand;
    
    cout << "Indtast dit køn (M/K): ";
    cin >> koen;
    
    cout << "Hvor mange liter vand har du drukket i dag? ";
    cin >> liter_vand;
    
    double anbefaling;
    
    // Bestem anbefaling baseret på køn
    if (koen == 'K' || koen == 'k') {
        anbefaling = 2.0;
    } else if (koen == 'M' || koen == 'm') {
        anbefaling = 2.5;
    }
    
    // Vurder væskeindtaget
    if (liter_vand < anbefaling) {
        cout << "Du har drukket for lidt" << endl;
    } else if (liter_vand >= anbefaling && liter_vand <= anbefaling + 0.5) {
        // "Tæt på anbefalingen" - inden for 0.5 liter over
        cout << "Du har drukket en passende mængde" << endl;
    } else {
        // Markant over anbefalingen
        cout << "Du har drukket rigeligt vand" << endl;
    }
}

int main() {
    int valg;
    
    do {
        cout << "\n=== SUNDHEDSOPGAVER ===" << endl;
        cout << "1. Søvn (Opgave 3)" << endl;
        cout << "2. Kalorieindtag (Opgave 4)" << endl;
        cout << "3. Væskebalance (Opgave 5)" << endl;
        cout << "0. Afslut" << endl;
        cout << "Vælg opgave (0-3): ";
        cin >> valg;
        
        switch(valg) {
            case 1:
                opgave3_sovn();
                break;
            case 2:
                opgave4_kalorier();
                break;
            case 3:
                opgave5_vaeskebalance();
                break;
            case 0:
                cout << "Farvel!" << endl;
                break;
            default:
                cout << "Ugyldigt valg. Prøv igen." << endl;
        }
    } while(valg != 0);
    
    return 0;
}