#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "Crashpad Example Application" << std::endl;
    int* null_ptr = nullptr;
    *null_ptr = 42; // Intentional crash
    return 0;
}

