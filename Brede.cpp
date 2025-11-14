#include <iostream>
using namespace std;

class Skade {
    double breddegrad;  // -90 til 90
    double laengdegrad; // -180 til 180
    
public:
    Skade(double b, double l) {
        // Check invariants
        if (b < -90 || b > 90) {
            cout << "Fejl: Breddegrad ugyldig!" << endl;
            b = 0;
        }
        if (l < -180 || l > 180) {
            cout << "Fejl: Længdegrad ugyldig!" << endl;
            l = 0;
        }
        
        breddegrad = b;
        laengdegrad = l;
    }
    
    void print() {
        cout << "(" << breddegrad << ", " << laengdegrad << ")" << endl;
    }
};


int main() {
    Skade s1(56, 10);      // OK
    s1.print();
    
    Skade s2(100, 10);     // Fejl - breddegrad > 90
    s2.print();
    
    Skade s3(50, 200);     // Fejl - længdegrad > 180
    s3.print();
    
    return 0;
}
