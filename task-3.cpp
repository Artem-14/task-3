#include <iostream>
#include <vector>
#include <locale>

int main() {
    setlocale(LC_ALL, "rus");

    int T;
    std::cout << "Введите продолжительность смены (T): ";
    std::cin >> T;

    std::vector<std::pair<int, int>> clients;
    int t, l;

    while (std::cin >> t >> l) {
        clients.push_back({ t, l });
    }

    int served_clients = 0;
    int total_service_time = 0;

    for (const auto& client : clients) {
        if (client.first + client.second <= T) {
            served_clients++;
            total_service_time += client.second;
        }
    }

    std::cout << "Количество обслуженных клиентов: " << served_clients << std::endl;
    std::cout << "Общее время обслуживания: " << total_service_time << " единиц времени." << std::endl;
    return 0;
}
