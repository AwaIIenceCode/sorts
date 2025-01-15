#include <iostream>

using namespace std;

void quickSort(int* arr, int left, int right)
{
    if (left >= right) return;

    int pivot = arr[right];
    int partitionIndex = left;

    for (int i = left; i < right; ++i)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[partitionIndex]);
            ++partitionIndex;
        }
    }
    swap(arr[partitionIndex], arr[right]);

    quickSort(arr, left, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, right);
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

    quickSort(arr, 0, size - 1);

    cout << "Sorted array:\n";
    displayArray(arr, size);

    return 0;
}
