#include <iostream>

using namespace std;

void insertionSort(int* arr, int size)
{
    for (int i = 1; i < size; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void displayArray(const int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int size = 10;
    int arr[size] = {5, 1, 4, 2, 8, 3, 7, 6, 9, 0};

    cout << "Original array:\n";
    displayArray(arr, size);

    insertionSort(arr, size);

    cout << "Sorted array:\n";
    displayArray(arr, size);

    return 0;
}
