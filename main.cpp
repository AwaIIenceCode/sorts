#include <iostream>

using namespace std;

void bubbleSortImproved(int* arr, int size) {
    bool swapped;
    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void displayArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 10;
    int arr[size] = {34, 12, 25, 78, 56, 7, 89, 45, 10, 19};

    cout << "Original array:\n";
    displayArray(arr, size);

    bubbleSortImproved(arr, size);

    cout << "Sorted array:\n";
    displayArray(arr, size);

    return 0;
}
