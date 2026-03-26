#include <iostream>

// Function definition
void greet(const std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    // Function call
    greet("World");
    return 0;
}