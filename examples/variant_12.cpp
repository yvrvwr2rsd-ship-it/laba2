#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int cells[] = {
        1, 0, 1, 1, 1,
        0, 1, 1, 0, 1,
        1, 1, 0, 1, 1,
        1, 0, 1, 1, 0
    };

    const std::size_t n = sizeof(cells) / sizeof(cells[0]);
    std::cout << std::fixed << std::setprecision(2);

    int passable = arr_count_positive(cells, n);
    int blocked = arr_count_zero(cells, n);
    double share = passable * 100.0 / n;

    std::cout << "Клеток в лабиринте: " << n << "\n";
    std::cout << "Проходимых клеток: " << passable << "\n";
    std::cout << "Непроходимых клеток: " << blocked << "\n";
    std::cout << "Максимальное значение: " << arr_max(cells, n) << "\n";
    std::cout << "Минимальное значение: " << arr_min(cells, n) << "\n";
    std::cout << "Доля проходимых клеток: " << share << "%\n";

    return 0;
}
