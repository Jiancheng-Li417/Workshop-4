#include <iostream>

int main() {
    int *numbers1 = readNumbers();
    int *numbers2 = reverseArray(numbers1,10);
    bool areEqual = equalsArray(numbers1, numbers2, 10);

    if(areEqual) {
        std::cout << "The arrays are equal." << std::endl;
    }
    delete[] numbers1;
    delete[] numbers2;
    return 0;
}
