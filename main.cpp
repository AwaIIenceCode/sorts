#include <iostream>
#include <algorithm>

using namespace std;

void customSort(int* arr, int size)
{
    double sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    double average = sum / size;

    if (average > 0)
    {
        sort(arr, arr + (2 * size / 3));
    }

    else
    {
        sort(arr, arr + (size / 3));
    }

    reverse(arr + (2 * size / 3), arr + size);
}

void displayArray(const int* arr, int size
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int size = 12;
    int arr[size] = {5, -2, 3, 7, -6, 1, 4, 9, -1, 0, 2, -3};

    cout << "Original array:\n";
    displayArray(arr, size);

    customSort(arr, size);

    cout << "Sorted array:\n";
    displayArray(arr, size);

    return 0;
}
