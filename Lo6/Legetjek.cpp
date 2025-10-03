# include <iostream>
# include <string>
using namespace std ;



int main () {
    cout << "===␣ Sundhedsberegner ␣===" << endl ;

    string navn ;

    cout << " Indtast ␣dit␣ navn :␣";

    getline( cin , navn ); // dette gør bare noget med bufferen da getline er indbygget funktoipo

    double hojde , vaegt ;
    cout << " Indtast ␣din␣ hojde ␣i␣ meter :␣";

    cin >> hojde ;

    cout << " Indtast ␣din␣ vaegt ␣i␣kg:␣";

    cin >> vaegt ;

    double bmi = vaegt / ( hojde * hojde );

    cout << "\n" << navn << ",␣ dit ␣ BMI ␣er:␣" << bmi << endl ;

    if ( bmi < 18.5) {
    cout << "Du␣er␣ undervaegtig ␣ ifoelge ␣BMI - skalaen ." << endl ;
    } else if ( bmi < 25) {
    cout << "Du␣ har ␣ normalvaegt ␣ ifoelge ␣BMI - skalaen ." << endl ;
    } else if ( bmi < 30) {
    cout << "Du␣er␣ overvaegtig ␣ ifoelge ␣BMI - skalaen ." << endl ;
    } else {
    cout << "Du␣er␣ svaert ␣ overvaegtig ␣ ifoelge ␣BMI - skalaen ." << endl ;}


    cout << "\n Nu ␣ skal ␣vi␣se␣ paa ␣dit␣ aktivitetsniveau ." << endl ;

    int minGang , minLoeb , minCykling ;

    cout << " Hvor ␣ mange ␣ minutter ␣har␣du␣ gaaet ␣ idag ?␣";
    cin >> minGang ;

    cout << " Hvor ␣ mange ␣ minutter ␣har␣du␣ loebet ␣ idag ?␣";
    cin >> minLoeb ;

    cout << " Hvor ␣ mange ␣ minutter ␣har␣du␣ cyklet ␣ idag ?␣";
    cin >> minCykling ;

    double kalorierGang = minGang * 4.0;

    double kalorierLoeb = minLoeb * 10.0;

    double kalorierCykling = minCykling * 8.0;
    cout << "\n Kalorieforbrug ␣ ved ␣ gaatur :␣" << kalorierGang << "␣ kcal " << endl ;
    cout << " Kalorieforbrug ␣ ved ␣ loeb :␣" << kalorierLoeb << "␣ kcal " << endl ;
    cout << " Kalorieforbrug ␣ ved ␣ cykling :␣" << kalorierCykling << " kcal " << endl ;
    
    double totalKalorier = kalorierGang + kalorierLoeb + kalorierCykling ;
    
    cout << " Samlet ␣ kalorieforbrug ␣ idag :␣" << totalKalorier << "kcal " << endl; // Gentaget logik for at vurdere indsats" << endl ;

    if (totalKalorier < 200) {  
    cout << "Du␣ har ␣ haft ␣en␣ meget ␣ stille ␣ dag ." << endl ;
    } else if ( totalKalorier < 500) {
    cout << "Du␣ har ␣ haft ␣ let ␣ aktivitet ." << endl ;
    } else if ( totalKalorier < 1000) {
    cout << "Du␣ har ␣ haft ␣en␣ aktiv ␣dag." << endl ;
    } else {
    cout << " Super ␣ flot !␣Du␣ har ␣ vaeret ␣ meget ␣ aktiv ␣ idag ." << endl ;
    }
    cout << "\n === ␣ Slut ␣paa␣ programmet ␣ === " << endl ;
    return 0;
}

