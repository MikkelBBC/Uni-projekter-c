#include <iostream>
#include <string>
using namespace std;

// Klassen Ting med 4 attributter
class Ting {
private:
    string navn;
    string kategori;
    int vaegt;
    string farve;

public:
    // Constructor - initialiserer en ny ting
    Ting(string n, string k, int v, string f) {
        navn = n;
        kategori = k;
        vaegt = v;
        farve = f;
    }
    
    // Getters - returnerer værdier
    string getNavn() {
        return navn;
    }
    
    string getKategori() {
        return kategori;
    }
    
    int getVaegt() {
        return vaegt;
    }
    
    string getFarve() {
        return farve;
    }
    
    // Setters - ændrer værdier
    void setNavn(string n) {
        navn = n;
    }
    
    void setKategori(string k) {
        kategori = k;
    }
    
    void setVaegt(int v) {
        vaegt = v;
    }
    
    void setFarve(string f) {
        farve = f;
    }
    
    // Beskriv metode - returnerer beskrivelse af tingen
    string beskriv() {
        return "Navn: " + navn + " | Kategori: " + kategori + 
               " | Vægt: " + to_string(vaegt) + " gram | Farve: " + farve;
    }
};

int main() {
    // Opret 3 forskellige ting
    Ting ting1("Vandflaske", "Drikkevarer", 500, "Blå");
    Ting ting2("Blyant", "Skriveredskab", 10, "Rød");
    Ting ting3("Bog", "Læsning", 350, "Grøn");
    
    // Test beskriv() metoden
    cout << "=== Test af beskriv() metode ===" << endl;
    cout << ting1.beskriv() << endl;
    cout << ting2.beskriv() << endl;
    cout << ting3.beskriv() << endl;
    
    // Test getters
    cout << "\n=== Test af getters ===" << endl;
    cout << "Ting1 navn: " << ting1.getNavn() << endl;
    cout << "Ting2 kategori: " << ting2.getKategori() << endl;
    cout << "Ting3 vægt: " << ting3.getVaegt() << " gram" << endl;
    cout << "Ting1 farve: " << ting1.getFarve() << endl;
    
    // Test setters
    cout << "\n=== Test af setters ===" << endl;
    cout << "Før ændring: " << ting2.beskriv() << endl;
    ting2.setFarve("Blå");
    ting2.setVaegt(15);
    cout << "Efter ændring: " << ting2.beskriv() << endl;
    
    return 0;
}