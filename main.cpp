#include <iostream>
#include <algorithm>

using namespace std;

void flip(int* pancakes, int size, int index)
{
    for (int i = 0; i <= index / 2; ++i)
    {
        swap(pancakes[i], pancakes[index - i]);
    }
}

int findMaxIndex(const int* pancakes, int size)
{
    int maxIndex = 0;
    for (int i = 1; i < size; ++i)
    {
        if (pancakes[i] > pancakes[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void pancakeSort(int* pancakes, int size)
{
    for (int i = size - 1; i > 0; --i)
    {
        int maxIndex = findMaxIndex(pancakes, i + 1);
        if (maxIndex != i)
        {
            if (maxIndex > 0)
            {
                flip(pancakes, size, maxIndex);
            }
            flip(pancakes, size, i);
        }
    }
}

void displayPancakes(const int* pancakes, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << pancakes[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 5;
    int pancakes[size] = {5, 1, 4, 2, 8};

    cout << "Original stack:\n";
    displayPancakes(pancakes, size);

    pancakeSort(pancakes, size);

    cout << "Sorted stack:\n";
    displayPancakes(pancakes, size);

    return 0;
}
