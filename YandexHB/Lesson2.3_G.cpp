#include <iostream>
#include <cmath>

int main () {
    double sum_first_to_n = 0.0;
    int n;
    std::cin >> n;
    for (int i=1; i<=n; ++i) {
        sum_first_to_n += (pow(-1, i+1))/static_cast<double>(i);
    }
    std::cout << sum_first_to_n;
}