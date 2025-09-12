#include <iostream>

int main(){
    std::cout << "indtats din alder i år:" << std::endl;
    int alder = 0;

    std::cin >> alder;

    std::cout << "indtast din puls i slag pr. minut:" << std::endl;
    int puls = 0;
    std::cin >> puls;

    int maxpuls = 220 - alder;

    if(puls < 0.5 * maxpuls){
        std::cout << "du er i hvile" << std::endl;
    } else if (puls >= 0.5 * maxpuls && puls < 0.6 * maxpuls){
        std::cout << "let motion" << std::endl;
    } else if (puls >= 0.6 * maxpuls && puls < 0.7 * maxpuls){
        std::cout << "moderat motion" << std::endl;
    } else if (puls >= 0.7 * maxpuls && puls < 0.8 * maxpuls){
        std::cout << "hård motion" << std::endl;
    } else if (puls >= 0.8 * maxpuls && puls < 0.9 * maxpuls){
        std::cout << "meget hård motion" << std::endl;
    } else if (puls >= 0.9 * maxpuls){
        std::cout << "ekstremt hård motion" << std::endl;
    }
}