#include <iostream>
#include <vector>   // vi bruger vector til at gemme alle pulsmålingerne
using namespace std;

int main() {
    int antal;
    cout << "Indtast antal pulsmålinger: ";
    cin >> antal;

    vector<int> pulser(antal); // gemmer alle pulsmålingerne
    int maxPuls, minPuls, sum = 0;

    // Input af målinger
    for (int i = 0; i < antal; i++) {
        cout << "Indtast puls nr. " << i + 1 << ": ";
        cin >> pulser[i];

        // første måling bruges til at initialisere min og max
        if (i == 0) {
            maxPuls = pulser[i];
            minPuls = pulser[i];
        }

        // opdater max
        if (pulser[i] > maxPuls) {
            maxPuls = pulser[i];
        }

        // opdater min
        if (pulser[i] < minPuls) {
            minPuls = pulser[i];
        }

        sum += pulser[i]; // læg til summen
    }

    double gennemsnit = static_cast<double>(sum) / antal;

    cout << "\n--- Resultater ---" << endl;
    cout << "Højeste puls: " << maxPuls << endl;
    cout << "Laveste puls: " << minPuls << endl;
    cout << "Gennemsnitspuls: " << gennemsnit << endl;

    return 0;
}
