#include <iostream>
#include <locale>

int main() {
    setlocale(LC_ALL, "rus");

    double u, v, w;
    int k, s, t, f;
    double p, q, r, t_perc;

    std::cout << "Введите параметры рациона (сено, силос, комбикорм): ";
    std::cin >> u >> v >> w;
    std::cout << "Введите количество коров: ";
    std::cin >> k;
    std::cout << "Введите количество сена, силоса и комбикорма: ";
    std::cin >> s >> t >> f;
    std::cout << "Введите проценты: погибание коров, гниение сена, разворовывание силоса и распродажа комбикорма: ";
    std::cin >> p >> q >> r >> t_perc;

    double total_sen = s / u;
    double total_silos = t / v;
    double total_comb = f / w;

    int days = 0;
    while (k > 0) {
        days++;

        s -= u * k;
        t -= v * k;
        f -= w * k;

        k -= k * p / 100;
        s -= s * q / 100; 
        t -= t * r / 100;
        f -= f * t_perc / 100;

        if (s < 0 || t < 0 || f < 0) break;
    }

    std::cout << "Все коровы смогут питаться в течение " << days << " дней." << std::endl;
    return 0;
}
