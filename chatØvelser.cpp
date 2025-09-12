// DEBUG ØVELSER - FIND FEJLENE!
// Der er mange forskellige typer fejl gemt i koden nedenfor
// Prøv at finde og ret dem alle

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ØVELSE 1: Simple matematiske beregninger
void oevelse1_matematik() {
    cout << "=== ØVELSE 1: MATEMATIK ===" << endl;
    
    double tal1 = 10;
    double tal2 = 3;
    
    // Find fejlen: Division problem
    cout << "10 / 3 = " << tal1 / tal2 << endl;  // Hvad er problemet her?
    
    // Find fejlen: Procent beregning
    double procent = 25;
    double total = 200;
    double resultat = (procent / 100) * total;  // Hvorfor bliver dette 0?
    cout << "25% af 200 = " << resultat << endl;
}

// ØVELSE 2: Array og loop problemer
void oevelse2_arrays() {
    cout << "\n=== ØVELSE 2: ARRAYS ===" << endl;
    
    int tal[] = {1, 2, 3, 4, 5};
    int sum = 0;
    
    // Find fejlen: Array bounds
    for(int i = 0; i <= 4; i++) {  // Er der noget galt her?
        sum += tal[i];
    }
    cout << "Sum: " << sum << endl;
    
    // Find fejlen: Off-by-one error
    vector<int> numre = {10, 20, 30, 40, 50};
    cout << "Tal i omvendt rækkefølge: ";
    for(int i = numre.size()-1; i >= 0; i--) {  // Hvad sker der her?
        cout << numre[i] << " ";
    }
    cout << endl;
}

// ØVELSE 3: Logiske fejl
void oevelse3_logik() {
    cout << "\n=== ØVELSE 3: LOGIK ===" << endl;
    
    int alder;
    cout << "Indtast din alder: ";
    cin >> alder;
    
    // Find fejlen: Logisk fejl i if-statement
    if(alder >= 18 && alder < 65) {  // Er denne logik korrekt?
        cout << "Du er i den arbejdsduegtige alder" << endl;
    } else {
        cout << "Du er pensionist" << endl;
    }
    
    // Find fejlen: Forkert comparison
    string password = "secret";
    string input = "";
    cout << "Indtast password: ";
    cin >> input;
    
    if(input == password) {  // Hvad er galt her?
        cout << "Adgang tilladt!" << endl;
    } else {
        cout << "Forkert password!" << endl;
    }
}

// ØVELSE 4: Variable scope og initialization
void oevelse4_variables() {
    cout << "\n=== ØVELSE 4: VARIABLES ===" << endl;
    
    int x = 0;  // Find fejlen: Uninitialized variable
    cout << "Værdi af x: " << x << endl;  // Hvad kan gå galt?
    
   int y;  // Definer uden for loop
    for(int i = 0; i < 3; i++) {
    y = i * 2;  // Tildel værdi (uden int)
    }
    cout << "Værdi af y: " << y << endl;  // Nu virker det!
    
    // Find fejlen: Integer overflow (måske)
    long long stort_tal = 2147483647;  // Max int værdi
    stort_tal = stort_tal + 1;
    cout << "Stort tal + 1: " << stort_tal << endl;  // Hvad sker der?
}

// ØVELSE 5: Function fejl
int oevelse5_funktioner(int a, int b) {
    cout << "\n=== ØVELSE 5: FUNKTIONER ===" << endl;
    
    if(a > b) {
        return a;
    } else if(b > a) {
        return b;
    }else {
        return a; // Håndter tilfældet hvor a == b
    }
    // Find fejlen: Missing return statement
    // Hvad hvis a == b?
}

// ØVELSE 6: Input validation
void oevelse6_input() {
    cout << "\n=== ØVELSE 6: INPUT ===" << endl;
    
    int tal;
    cout << "Indtast et positivt tal: ";
    cin >> tal;
    
    // Find fejlen: No input validation
    int resultat = 100 / tal;  // Hvad hvis tal er 0?
    cout << "100 / " << tal << " = " << resultat << endl;
    
    // Find fejlen: Array index problem
    vector<string> navne = {"Anna", "Bob", "Charlie"};
    int index;
    cout << "Vælg person (0-2): ";
    cin >> index;
    
    cout << "Du valgte: " << navne[index] << endl;  // Hvad hvis index er ugyldig?
}

// ØVELSE 7: String manipulation
void oevelse7_strings() {
    cout << "\n=== ØVELSE 7: STRINGS ===" << endl;
    
    string tekst = "Hello World";
    
    // Find fejlen: String index out of bounds
    for(int i = 0; i <= tekst.length(); i++) {  // Problem her?
        cout << tekst[i];
    }
    cout << endl;
    
    // Find fejlen: Infinite loop risk
    string input = "";
    while(input != "stop") {
        cout << "Skriv 'stop' for at afslutte: ";
        cin >> input;
        // Hvad hvis brugeren aldrig skriver 'stop'?
    }
}

// ØVELSE 8: Memory og pointer problemer (simpel version)
void oevelse8_memory() {
    cout << "\n=== ØVELSE 8: MEMORY ===" << endl;
    
    int* ptr = new int(42);
    
    cout << "Værdi: " << *ptr << endl;
    
    delete ptr;
    
    // Find fejlen: Use after delete
    cout << "Værdi efter delete: " << *ptr << endl;  // Farlig!
    
    // Find fejlen: Double delete
    delete ptr;  // Allerede deleted!
}

int main() {
    cout << "VELKOMMEN TIL DEBUG ØVELSERNE!" << endl;
    cout << "Prøv at køre programmet og se hvilke fejl der opstår." << endl;
    cout << "Derefter skal du finde og rette fejlene i koden." << endl;
    cout << "========================================" << endl;
    
    // Kald alle øvelser (nogle vil crash programmet!)
    oevelse1_matematik();
    oevelse2_arrays();
    oevelse3_logik();
    oevelse4_variables();
    
    int max_tal = oevelse5_funktioner(5, 5);
    cout << "Største tal: " << max_tal << endl;
    
    oevelse6_input();
    oevelse7_strings();
    oevelse8_memory();  // ADVARSEL: Denne kan crashe!
    
    return 0;
}