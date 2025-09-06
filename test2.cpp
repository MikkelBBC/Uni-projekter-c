#include <iostream> // bibliotek til input og output
#include <vector> // bibliotek til vektorer

int main(){
    std::cout << "Hello, world!" << std::endl; //std er output stream og std::endl er linjeskift den er anderleds end \n fordi den tømmer bufferen
    


    double ditsvar = 0; // variabel til at gemme brugerens svar

    std::cout << "indskriv et svar i decimaltal:";

    std::cin >> ditsvar; // std::cin er input stream

    std::cout << "dit svar var:" << ditsvar << std::endl;
    return 0; // return 0 betyder at programmet er kørt færdigt uden fejl

}