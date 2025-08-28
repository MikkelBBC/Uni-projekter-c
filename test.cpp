#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    // Test basic output
    std::cout << "=== C++ Compiler Test Program ===" << std::endl;
    
    // Test variables and data types
    int number = 42;
    double pi = 3.14159;
    std::string message = "Hello from C++!";
    bool isWorking = true;
    
    std::cout << "Integer: " << number << std::endl;
    std::cout << "Double: " << pi << std::endl;
    std::cout << "String: " << message << std::endl;
    std::cout << "Boolean: " << (isWorking ? "true" : "false") << std::endl;
    
    // Test STL containers
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Vector contents: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Test STL algorithms
    auto max_element = std::max_element(numbers.begin(), numbers.end());
    std::cout << "Maximum element: " << *max_element << std::endl;
    
    // Test user input
    std::cout << "Enter your name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Nice to meet you, " << name << "!" << std::endl;
    
    // Test mathematical operations
    int a = 10, b = 3;
    std::cout << "Math test: " << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << "Math test: " << a << " / " << b << " = " << (a / b) << std::endl;
    std::cout << "Math test: " << a << " % " << b << " = " << (a % b) << std::endl;
    
    std::cout << "C++ compiler test completed successfully!" << std::endl;
    
    return 0;
}