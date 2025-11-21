#include <iostream>
#include <string>
using namespace std;

class Kop {
private:
    string farve;
    int kapacitet; // i milliliter
    int indhold; //i milliliter

public:
    // Constructor
    Kop(string f, int k) {
        farve = f;
        kapacitet = k;
        indhold = 0;
    }

    Kop(int k) {
        farve = "hvid";
        kapacitet = k;
        indhold = 0;
    }    

    string getFarve() {return farve;}

    // Metode 1: Udskriv information om koppen
    void visInfo() {
        cout << "Koppen er " << farve << " og kan indeholde "
             << kapacitet << " ml." << endl;
    }

    // Metode 2: Fyld koppen (simuleret funktion)
    void fyld(int ml) {
        if (ml > kapacitet)
            cout << "For meget! Koppen kan kun indeholde "
                 << kapacitet << " ml." << endl;
        else {
            indhold += ml;
            cout << "Du har fyldt " << ml << " ml i koppen." << endl;
        }
    }


    bool erFuldt() {
        
        return (indhold >= kapacitet * 0.5);
    }
};

// Eksempel pÃ¥ brug
int main() {
    Kop kop1("blÃ¥", 250);
    kop1.visInfo();
    kop1.fyld(200);
    kop1.fyld(300);
    kop1.erFuldt();
    cout << kop1.getFarve();
    return 0;
}