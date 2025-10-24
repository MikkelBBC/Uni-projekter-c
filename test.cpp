#include <iostream>
#include <string>
using namespace std;

int main() {
    // Test 1: Simpel output
    cout << "=== VS Code Debug Test ===" << endl;
    cout << endl;
    
    // Test 2: Variabler
    string navn = "Mikke";
    int alder = 25;
    double hoejde = 1.80;
    
    cout << "Navn: " << navn << endl;
    cout << "Alder: " << alder << endl;
    cout << "Hoejde: " << hoejde << " meter" << endl;
    cout << endl;
    
    // Test 3: Input
    cout << "Indtast dit navn: ";
    string brugerNavn;
    cin >> brugerNavn;
    
    cout << "Hej " << brugerNavn << "! Velkommen!" << endl;
    cout << endl;
    
    // Test 4: Beregning
    cout << "Indtast to tal for at laegge sammen:" << endl;
    cout << "Tal 1: ";
    int tal1;
    cin >> tal1;
    
    cout << "Tal 2: ";
    int tal2;
    cin >> tal2;
    
    int sum = tal1 + tal2;
    cout << "Resultat: " << tal1 << " + " << tal2 << " = " << sum << endl;
    cout << endl;
    
    // Test 5: Loop
    cout << "Tael til 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << "... ";
    }
    cout << endl << endl;
    
    // Test 6: If-statement
    if (sum > 10) {
        cout << "Summen er stoerre end 10!" << endl;
    } else if (sum == 10) {
        cout << "Summen er praecis 10!" << endl;
    } else {
        cout << "Summen er mindre end 10!" << endl;
    }
    cout << endl;
    
    cout << "=== Test fuldfoert! ===" << endl;
    cout << "Tryk Enter for at afslutte...";
    cin.ignore();
    cin.get();
    
    return 0;
}