#include <iostream>
#include <cmath>
using namespace std;

// Globale variabler
double x;

// Funktioner
double readPositiveDouble();
double sqrtNewton(double tal);
void udskrivIterationslog(int iter, double g);

int main() {
    cout << "=== Kvadratrod med Newtons metode ===" << endl;
    
    // Kald funktionerne direkte
    x = readPositiveDouble();
    double resultat = sqrtNewton(x);
    
    cout << "*** Slut ***" << endl;
    return 1;
}

double readPositiveDouble() {
    double tal;
    cout << "Indtast et positivt tal: ";
    cin >> tal;
    
    if (tal < 0) {
        cout << "Fejl: Kan ikke beregne kvadratrod af negativt tal." << endl;
        exit(1);  // Stop programmet
    }
    
    if (tal == 0) {
        cout << "Kvadratroden af 0 er 0" << endl;
        exit(0);  // Stop programmet
    }
    
    return tal;
}

double sqrtNewton(double tal) {
    double g = tal;
    double epsilon = 1e-6;
    int maxIter = 100;
    int iter = 0;
    
    cout << "Starter iteration..." << endl;
    
    while (iter < maxIter) {
        double ny = 0.5 * (g + tal / g);
        
        udskrivIterationslog(iter, g);
        
        if (fabs(ny - g) < epsilon) {
            cout << "Konvergeret! Kvadratrod: " << ny << endl;
            return ny;
        }
        
        g = ny;
        iter++;
    }
    
    cout << "Metoden konvergerede ikke hurtigt nok." << endl;
    return g;
}

void udskrivIterationslog(int iter, double g) {
    cout << "Iteration " << iter << ": g = " << g << endl;
}