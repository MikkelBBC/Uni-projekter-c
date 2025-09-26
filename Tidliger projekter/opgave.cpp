#include <iostream>

int main(){
    std::cout << " indtast din vægt i kg:";
    double vægt = 0;
    std::cin >> vægt;
    std::cout << " indtast din højde i meter:";
    double højde = 0;
    std::cin >> højde;
    double bmi = vægt / (højde * højde);
    if (bmi < 18.5) {
        std::cout << " du er undervægtig" << std::endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        std::cout << " du har normalvægt" << std::endl;
    } else if (bmi >= 25 && bmi < 30) {
        std::cout << " du er overvægtig" << std::endl;
    } else if (bmi >= 30) {
        std::cout << " du er svært overvægtig" << std::endl;
    }

    
}