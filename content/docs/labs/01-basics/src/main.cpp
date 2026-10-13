#include "sum.hpp"

#include <iostream>
#include <vector>

int main() {
    const std::vector<int> values{1, 2, 3, 4, 5};
    std::cout << "Sum = " << sum(values) << '\n';
    return 0;
}
