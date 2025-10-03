# include <iostream>
# include <string>
using namespace std ;


 
 double tid ; // Compiler tænker: "Dette skal eksistere HELE programmets levetid (anbefales at skrive i main)"
// skriv kun en linje kode af gangen co pilot

int main(){
    double distance ; // Compiler ved: "Dette er midlertidigt, det lever kun mens funktionen kører"
   
    cout << "=== Cykeltursplanlægger ===" << endl ;
   

    cout << "Indtast distance i km: " ;
    while(!(cin >> distance || distance >0)){
        cout << "Fejl da der sla indtasete et tale det er ikke 0 eller et ordentligt tal" << endl ;
        cin.clear() ; // rydder fejlen
        cin.ignore(1000 '\n');
    }
    cout << "<ndtast tid brugt: " ;
    cin >>  tid ;
    







}