#include <iostream>
using namespace std;
int tealle;
int neavner = 1;

int main(void){
    while (neavner != 0)
    {
        cout << "Indtast et tal: ";
        cin >> neavner;
        cin >> tealle;
        if (neavner !=0)
        {
            cout << "Resultat: " << (double)tealle / neavner << endl;
        }
        
    }
    return 0;
}

