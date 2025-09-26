#include <iostream>
#include <cmath>
using namespace std;


int checkFejl()
int main() {
    cout << "=== Kvadratrod med Newtons metode ===" << endl;
    
    double x;
    cout << "Indtast et positivt tal: ";
    cin >> x;
    
   


     

    
    
    double g = x;
    double epsilon = 1e-6; // er hvor mange decimaler der kommer
    int maxIter = 100;
    int iter = 0;
    
    cout << "Starter iteration..." << endl;
    
    while (iter < maxIter) {
        double ny = 0.5 * (g + x / g);
        
        cout << "Iteration " << iter << ": g = " << g << endl;
        
        if (fabs(ny - g) < epsilon) { // tager det positive numersik  værdi
            cout << "Konvergeret! Kvadratrod: " << ny << endl;
            break;
        }
        
        g = ny;
        iter++;
    }
    
    if (iter == maxIter) {
        cout << "Metoden konvergerede ikke hurtigt nok." << endl;
    }
    
    cout << "*** Slut ***" << endl;
    return 0;


}


checkFejl int(){if (x < 0) {
        cout << "Fejl: Kan ikke beregne kvadratrod af negativt tal." << endl;
        return 1;
    }
    
    if (x == 0) {
        cout << "Kvadratroden af 0 er 0" << endl;
        return 0;
    }}