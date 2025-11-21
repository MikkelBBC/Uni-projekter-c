#include <iostream>
#include <string>
using namespace std;

// Funktion der tjekker om en string er et palindrom
// Returnerer true hvis det er et palindrom, false hvis ikke
bool isPalindrome(string ord) {
    int left = 0;
    int right = ord.length() - 1;
    
    while (left < right) {
        if (ord[left] != ord[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

int main() {
    string input;
    
    cout << "Indtast tekst (eller 'stop' for at afslutte): ";
    
    while (cin >> input && input != "stop") {
        if (isPalindrome(input)) {
            cout << "'" << input << "' er et palindrom" << endl;
        } else {
            cout << "'" << input << "' er ikke et palindrom" << endl;
        }
        cout << "\nIndtast tekst (eller 'stop' for at afslutte): ";
    }
    
    return 0;
}