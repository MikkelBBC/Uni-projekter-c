#include <iostream>

class skade{
    double veagt;
    double breddegrad;
    double laengdegrad;

public:
    skade(double v, double b, double l){
        veagt = v;
        breddegrad = b;
        laengdegrad = l;
    }

    double get_veagt(){
        return veagt;
    }

    void flyv(){
        breddegrad += 0.01;
        laengdegrad += 0.01;
        veagt -= 0.1;
    }
};

int main(){
    skade jens(213, 56, 10.191144);
    skade piphans(123, 45, 9.191144);
    skade piphans2(323, 78, 8.191144);

    std::cout << piphans2.get_veagt() << std::endl;
    piphans2.flyv();
    std::cout << piphans2.get_veagt() << std::endl;
    
    std::cout << jens.get_veagt() << std::endl;
    jens.flyv();
    std::cout << jens.get_veagt() << std::endl;
    
    return 0;
}