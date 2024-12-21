#include <iostream>
#include <cmath>
#include <locale>

int main() {
    setlocale(LC_ALL, "rus");

    double k, p, r;
    std::cout << "Введите сумму кредита (k): ";
    std::cin >> k;
    std::cout << "Введите процентную ставку (p): ";
    std::cin >> p;
    std::cout << "Введите прибыль в год (r): ";
    std::cin >> r;

    double accumulated = 0;
    double debt = k;
    int years = 0;

    while (accumulated < debt) {
        accumulated += r;
        debt *= (1 + p / 100);
        years++;
    }

    std::cout << "Предприниматель сможет погасить кредит через " << years << " лет." << std::endl;
    return 0;
}
