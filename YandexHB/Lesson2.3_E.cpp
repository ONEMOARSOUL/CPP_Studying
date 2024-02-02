#include <iostream>


void print (int startDay, int numDays) {
    // Вывод пустых дней в начале недели
    for (int i = 1; i < startDay; ++i) {
        std::cout << "   ";
    }

    for (int day = 1; day <= numDays; ++day) {
        // Добавляем пробел в начало числа, если оно однозначное
        std::cout << (day < 10 ? " " : "") << day;

        // Перенос на следующую строку после каждого седьмого дня
        if ((startDay + day - 1) % 7 == 0 || day == numDays) {
            std::cout << std::endl;
        } else {
            std::cout << " ";
        }
    }
}

int main () {
    
    int n = 0, k = 0;
    std::cin >> n >> k;

    print(n,k);    
    
        
}