#include <iostream>

int main() {
    const int NUM_DAYS = 7;
    const double THRESHOLD = 100.0;

    double expenses[NUM_DAYS];
    const char* days[NUM_DAYS] = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье" };

    for (int i = 0; i < NUM_DAYS; i++) {
        std::cout << "Введите расход в долларах за " << days[i] << ": ";
        std::cin >> expenses[i];
    }

    double totalExpenses = 0.0;
    for (int i = 0; i < NUM_DAYS; i++) {
        totalExpenses += expenses[i];
    }
    double averageExpense = totalExpenses / NUM_DAYS;

    double sumExpenses = 0.0;
    for (int i = 0; i < NUM_DAYS; i++) {
        sumExpenses += expenses[i];
    }

    int numDaysExceeded = 0;
    for (int i = 0; i < NUM_DAYS; i++) {
        if (expenses[i] > THRESHOLD) {
            numDaysExceeded++;
        }
    }

    std::cout << "Средняя потраченная сумма за неделю: $" << averageExpense << std::endl;
    std::cout << "Общая сумма расходов за неделю: $" << sumExpenses << std::endl;
    std::cout << "Количество дней, когда сумма расхода превысила $100: " << numDaysExceeded << std::endl;
    std::cout << "Дни, когда сумма расхода превысила $100: ";
    for (int i = 0; i < NUM_DAYS; i++) {
        if (expenses[i] > THRESHOLD) {
            std::cout << days[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
