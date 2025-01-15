#include <iostream>
#include <string>

using namespace std;

void sortMobileNumbers(string* mobile, string* home, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (mobile[j] > mobile[j + 1])
            {
                swap(mobile[j], mobile[j + 1]);
                swap(home[j], home[j + 1]);
            }
        }
    }
}

void sortHomeNumbers(string* mobile, string* home, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (home[j] > home[j + 1])
            {
                swap(mobile[j], mobile[j + 1]);
                swap(home[j], home[j + 1]);
            }
        }
    }
}

void displayUsers(const string* mobile, const string* home, int size)
{
    cout << "User list:\n";
    for (int i = 0; i < size; ++i)
    {
        cout << "Mobile: " << mobile[i] << ", Home: " << home[i] << '\n';
    }
}

int main()
{
    const int size = 5;
    string mobile[size] = {"123456789", "987654321", "234567890", "456789012", "345678901"};
    string home[size] = {"112233445", "554433221", "667788990", "998877665", "123443211"};

    int choice;
    do {
        cout << "\nMenu:\n1. Sort by mobile numbers\n2. Sort by home numbers\n3. Display users\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                sortMobileNumbers(mobile, home, size);
                cout << "Sorted by mobile numbers.\n";
                break;
            case 2:
                sortHomeNumbers(mobile, home, size);
                cout << "Sorted by home numbers.\n";
                break;
            case 3:
                displayUsers(mobile, home, size);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
