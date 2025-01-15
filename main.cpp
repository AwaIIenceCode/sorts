#include <iostream>

using namespace std;

void bubbleSort(int* arr, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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

    bubbleSort(arr, size);

    cout << "Sorted array:\n";
    displayArray(arr, size);

    return 0;
}
