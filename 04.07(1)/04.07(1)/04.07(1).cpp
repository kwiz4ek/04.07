#include <iostream>

int main() {
    const int SIZE = 10;
    const int HALF_SIZE = SIZE / 2;

    int sourceArray[SIZE];
    int array1[HALF_SIZE];
    int array2[HALF_SIZE];

    int seed = static_cast<int>(time(nullptr));
    int multiplier = 48271;
    int modulus = 2147483647;
    int randomNum = seed;

    for (int i = 0; i < SIZE; i++) {
        randomNum = (randomNum * multiplier) % modulus;
        sourceArray[i] = randomNum % 100; 
    }

        for (int i = 0; i < HALF_SIZE; i++) {
        array1[i] = sourceArray[i];
        array2[i] = sourceArray[i + HALF_SIZE];
    }

    std::cout << "Первый массив:" << std::endl;
    for (int i = 0; i < HALF_SIZE; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Второй массив:" << std::endl;
    for (int i = 0; i < HALF_SIZE; i++) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
