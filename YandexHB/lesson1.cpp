#include <iostream>

//печатаем нужное кол-во пробелов перед числом и выводим само число (аргумент функции)
void print (int count) {
    if (count >= 10) { // печатаем пробел перед числом
    std::cout << " ";
    std::cout << count;
    } else { //печатаем два пробела перед числом
    std::cout << "  ";
    std::cout << count;
    }
        
}

int main () {
    
    int n = 0, k = 0;
    int cntr = 1;
    std::cin >> n >> k;

    for (int i = 1; i <= k ; ++i) {
        if (cntr < n) {
            std::cout << "   ";
            ++cntr;
        } else if  (i % 7 != 0)
        {
        print(i); //вызов функции печати
        } else
        {
            print (i);
            std::cout << "\n"; // перевод на новую строку после каждого 7ого дня
        }
    }
       
}