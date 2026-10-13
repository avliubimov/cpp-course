#include "sum.hpp"

#include <cstdlib>
#include <iostream>
#include <vector>

static void check(bool condition, const char* what) {
    if (!condition) {
        std::cerr << "FAIL: " << what << '\n';
        std::exit(1);
    }
}

int main() {
    check(sum({}) == 0, "empty vector");
    check(sum({1, 2, 3}) == 6, "positive numbers");
    check(sum({-5, 5}) == 0, "mixed signs");

    std::cout << "All tests passed\n";
}
