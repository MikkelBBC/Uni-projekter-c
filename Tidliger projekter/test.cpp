#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

int main() {
    std::cout << "=== C++ Setup Test Program ===" << std::endl;
    
    // Test 1: Basic output
    std::cout << "Test 1: Basic output - OK" << std::endl;
    
    // Test 2: Variables and datatypes
    int heltal = 42;
    double decimaltal = 3.14159;
    std::string tekst = "C++ virker!";
    
    std::cout << "Test 2: Variabler - heltal: " << heltal 
              << ", decimal: " << decimaltal 
              << ", tekst: " << tekst << std::endl;
    
    // Test 3: STL containers
    std::vector<int> tal = {1, 2, 3, 4, 5};
    std::cout << "Test 3: STL vector - ";
    for (int nummer : tal) {
        std::cout << nummer << " ";
    }
    std::cout << std::endl;
    
    // Test 4: Mathematical operations
    double resultat = heltal * decimaltal;
    std::cout << "Test 4: Matematik - " << heltal << " * " << decimaltal << " = " 
              << std::fixed << std::setprecision(3) << resultat << std::endl;
    
    // Test 5: User input
    std::string navn;
    std::cout << "Test 5: Input - Indtast dit navn: ";
    std::getline(std::cin, navn);
    std::cout << "Hej " << navn << "! Dit C++ setup virker perfekt!" << std::endl;
    
    // Test 6: Compiler info
    std::cout << "\nCompiler information:" << std::endl;
    std::cout << "C++ standard: " << __cplusplus << std::endl;
    
    #ifdef __GNUC__
        std::cout << "Compiler: GCC version " << __GNUC__ << "." << __GNUC_MINOR__ << std::endl;
    #endif
    
    #ifdef _WIN32
        std::cout << "Platform: Windows" << std::endl;
    #endif
    
    std::cout << "\n=== Alle tests gennemfoert! Setup er OK! ===" << std::endl;
    
    return 0;
}