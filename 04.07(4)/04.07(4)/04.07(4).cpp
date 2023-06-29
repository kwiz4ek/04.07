#include <iostream>

int main() {
    const int NUM_MONTHS = 12;
    double exchangeRates[NUM_MONTHS];
    double interestAmounts[NUM_MONTHS];
    double depositAmount;

    for (int i = 0; i < NUM_MONTHS; i++) {
        std::cout << "Введите курс доллара за месяц " << i + 1 << ": ";
        std::cin >> exchangeRates[i];

        std::cout << "Введите начисленные проценты за месяц " << i + 1 << ": ";
        std::cin >> interestAmounts[i];
    }

    std::cout << "Введите сумму на депозите в евро: ";
    std::cin >> depositAmount;

    int month;
    std::cout << "Введите номер месяца (1-12): ";
    std::cin >> month;

    if (interestAmounts[month - 1] >= 500.0) {
        double maxCashAmount = interestAmounts[month - 1] * 0.5;
        double cashAmount = std::min(maxCashAmount, depositAmount * exchangeRates[month - 1]);
        std::cout << "Максимальная сумма, которую вы можете обналичить: $" << cashAmount << std::endl;
    }
    else {
        std::cout << "В этом месяце начисленная сумма составляет менее $500. Обналичивать средства нельзя." << std::endl;
    }

    return 0;
}
