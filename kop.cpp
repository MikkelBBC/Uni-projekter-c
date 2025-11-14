#include <iostream>
#include <string>
using namespace std;

class Kop {
    double indhold;
    double temperatur;
    string materiale;
    
public:
    // Constructor
    Kop(string mat, double temp) {
        materiale = mat;
        indhold = 0;
        temperatur = temp;
        cout << materiale << " kop oprettet!" << endl;
    }
    
    // Destructor
    ~Kop() {
        cout << materiale << " kop destrueret!" << endl;
    }
    
    // Getters
    double get_indhold() {
        return indhold;
    }
    
    double get_temperatur() {
        return temperatur;
    }
    
    // Member functions
    void fyld(double maengde) {
        indhold += maengde;
        cout << "Fyldt " << maengde << " ml" << endl;
    }
    
    void drik(double maengde) {
        indhold -= maengde;
        temperatur -= 2;
        cout << "Drak " << maengde << " ml" << endl;
    }
    
    void print_info() {
        cout << "Materiale: " << materiale << endl;
        cout << "Indhold: " << indhold << " ml" << endl;
        cout << "Temperatur: " << temperatur << " grader" << endl;
        cout << endl;
    }
};


int main() {
    Kop kaffe("keramik", 80);
    kaffe.fyld(300);
    kaffe.print_info();
    
    kaffe.drik(100);
    kaffe.print_info();
    
    Kop te("glas", 70);
    te.fyld(250);
    te.print_info();
    
    return 0;
}
