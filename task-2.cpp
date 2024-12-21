#include <iostream>
#include <vector>
#include <locale>

int main() {
    setlocale(LC_ALL, "rus");

    int total_time = 0;
    int processing_time[3];

    std::cout << "Введите время обработки каждой детали на трех станках (по три числа для каждой детали)." << std::endl;

    while (std::cin >> processing_time[0] >> processing_time[1] >> processing_time[2]) {
        total_time += processing_time[0] + processing_time[1] + processing_time[2];
    }

    std::cout << "Общее время обработки всех деталей: " << total_time << " единиц времени." << std::endl;
    return 0;
}
