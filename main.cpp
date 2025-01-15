#include <iostream>

using namespace std;

void displayGrades(const int* grades, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << "Grade " << i + 1 << ": " << grades[i] << endl;
    }
}

void retakeExam(int* grades, int size)
{
    int index, newGrade;
    cout << "Enter the index of the grade to change (1-10): ";
    cin >> index;
    if (index < 1 || index > size)
    {
        cout << "Invalid index.\n";
        return;
    }

    cout << "Enter the new grade: ";
    cin >> newGrade;

    grades[index - 1] = newGrade;
    cout << "Grade updated.\n";
}

void checkScholarship(const int* grades, int size)
{
    double sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += grades[i];
    }

    double average = sum / size;
    if (average >= 10.7)
    {
        cout << "Scholarship approved. Average grade: " << average << endl;
    }

    else
    {
        cout << "Scholarship denied. Average grade: " << average << endl;
    }
}

void menu(int* grades, int size)
{
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1: Display grades\n";
        cout << "2: Retake exam\n";
        cout << "3: Check scholarship\n";
        cout << "4: Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                displayGrades(grades, size);
                break;
            case 2:
                retakeExam(grades, size);
                break;
            case 3:
                checkScholarship(grades, size);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);
}

int main()
{
    const int size = 10;
    int grades[size];

    cout << "Enter 10 grades:\n";
    for (int i = 0; i < size; ++i)
    {
        cin >> grades[i];
    }

    menu(grades, size);

    return 0;
}
