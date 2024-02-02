#include <iostream>

int find_smallest_index(int arr[], int size);
void selection_sort(int arr[], int size);

int find_smallest_index(int arr[], int size) {
    
    int smallest_index = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < arr[smallest_index]) {
            smallest_index = i;
        }
    }
    return smallest_index;
    
}

void selection_sort(int arr[], int size) {
    
    int newArr[5];

    for (int i = 0; i < size; ++i) {
        int smallest_index = find_smallest_index(arr + i, size - i) + i;
        std::swap(arr[i], arr[smallest_index]);
    }
        
}

int main () {

    int MyArr[] = {5,3,6,2,10};

    int size = sizeof(MyArr) / sizeof(MyArr[0]);

    selection_sort(MyArr, size);

    for (int i = 0; i < size; ++i) {
        std::cout << MyArr[i] << " ";
    }

    return 0;

}