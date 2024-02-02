#include <iostream>
#include <cmath>

int main () {
    long long num;
    std::cin >> num;
    int sum_of_dig = 0;
    
    while (num != 0)
    {
        int last_digit = num % 10;
        sum_of_dig += last_digit;
        num /= 10;
    }
    
    std::cout << sum_of_dig;
}