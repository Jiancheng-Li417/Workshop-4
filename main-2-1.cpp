#include <iostream>
int main() {
    int  *numbers = readNumbers();
    hexDigits(numbers, 10);
    delete[] numbers;
    return 0;
}