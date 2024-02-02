#include <iostream>
int binary_search (int arr[], int size, int item) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        int guess = arr[mid];
        if (guess == item) {
            return mid;
        } else if (guess > item) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
        return -1;
    }
}

int main () {

int A[] = {1,3,5,7,9};
int size = sizeof(A) / sizeof(A[0]);
std::cout << binary_search (A, size, 5);

}