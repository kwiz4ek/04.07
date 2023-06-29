#include <iostream>

int main() {
    const int SIZE = 5;

    int array1[SIZE];
    int array2[SIZE];
    int resultArray[SIZE];

    
    int seed = 12345;
    int multiplier = 48271;
    int modulus = 2147483647;
    int randomNum = seed;

   
    for (int i = 0; i < SIZE; i++) {
        randomNum = (randomNum * multiplier) % modulus;
        array1[i] = randomNum % 100; 

        randomNum = (randomNum * multiplier) % modulus;
        array2[i] = randomNum % 100; 
    }

    for (int i = 0; i < SIZE; i++) {
        resultArray[i] = array1[i] + array2[i];
    }

    std::cout << "Массив 1:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Массив 2:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Результат:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << resultArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
