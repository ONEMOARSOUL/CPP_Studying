#include <iostream>

void find_smallest_arr(int arr[], int size) {
    
    int smallest = arr[0];
    int smallest_index = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallest_index = i;
        }
    }
    std::cout << smallest_index;
    
}

int main () {

    int MyArr[] = {1,2,3,4,5};

    int size = sizeof(MyArr) / sizeof(MyArr[0]);

    find_smallest_arr(MyArr, size);

    return 0;

}