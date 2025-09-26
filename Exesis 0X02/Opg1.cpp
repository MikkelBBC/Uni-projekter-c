#include <iostream>
using namespace std;

int måltid1, måltid2, måltid3;


int main(){

    cout<< "indtast calorierne for dine tre måltider" << endl;

    cin >> måltid1;
    cin >> måltid2;
    cin >> måltid3;

    int samlet = måltid1 + måltid2 + måltid3;

    cout<< "dist samlet indtag af kalorier er i alt " << samlet << " kcal" << endl;

    if (samlet < 100)
    {
        cout << "spis mere" << endl;
    }else if (samlet >= 100 && samlet < 500)
    {
        cout << "du er på rette vej" << endl;
    }else if (samlet >= 500 && samlet < 1000)
    {
        cout << "pas på du spiser for meget" << endl;
    }else if (samlet >= 1000){
        cout << "du spiser alt for meget" << endl;
    }else{
        cout << "noget gik galt" << endl;
    }

    
    


}