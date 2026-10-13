#include "sum.hpp"

int sum(const std::vector<int>& values) {
    int result = 0;
    for (int value : values) {
        result += value;
    }
    return result;
}
