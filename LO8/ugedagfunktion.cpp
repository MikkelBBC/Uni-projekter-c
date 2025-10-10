#include "ugedagsfunktion.h"
#include <string>
using namespace std;

string ugedag(int dag) {
    switch(dag) {
        case 1: return "Mandag";
        case 2: return "Tirsdag";
        case 3: return "Onsdag";
        case 4: return "Torsdag";
        case 5: return "Fredag";
        case 6: return "Lørdag";
        case 7: return "Søndag";
        default: return "Ugyldig dag";
    }
}