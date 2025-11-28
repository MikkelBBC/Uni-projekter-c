#include <iostream>
using namespace std;

class Bog {
private:
    string titel;

public:
    // Constructor
    Bog(string t) {
        titel = t;
    }

    // Get metode
    string getTitel() {
        return titel;
    }

    // Set metode
    void setTitel(string t) {
        titel = t;
    }
};

int main() {
    // Lav en bog
    Bog bog1("Harry Potter");
    
    // Brug GET til at hente titel
    cout << "Bogens titel: " << bog1.getTitel() << endl;
    
    // Brug SET til at ændre titel
    bog1.setTitel("Ringenes Herre");
    
    // Brug GET igen for at se den nye titel
    cout << "Ny titel: " << bog1.getTitel() << endl;
    
    return 0;
}