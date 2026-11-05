#include <iostream>
using namespace std;

int main() {
    
    // Declare and initialize an array
    int arr[5] = {10, 20, 30, 40, 50};

    int size = 5;

    // Print array elements
    cout << "Array elements: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Calculate sum of array
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    cout << "Sum of array: " << sum << endl;

    // Find maximum element
    int maximum = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << "Maximum element: " << maximum << endl;

    // Find minimum element
    int minimum = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << "Minimum element: " << minimum << endl;

    // Linear Search
    int target = 30;
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << target << " found at index " << index << endl;
    } else {
        cout << target << " not found" << endl;
    }

    // Reverse the array
    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    
        // =====================================
    // MINI PROJECT: STUDENT MARKS MANAGEMENT
    // =====================================

    cout << "\n===== STUDENT MARKS MANAGEMENT SYSTEM =====" << endl;

    int students;
    cout << "Enter number of students: ";
    cin >> students;

    int marks[100];
    int total = 0;

    // Input marks
    for (int i = 0; i < students; i++) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];

        total += marks[i];
    }

    // Display all marks
    cout << "\nStudent Marks: " << endl;

    for (int i = 0; i < students; i++) {
        cout << "Student " << i + 1 << ": "
             << marks[i] << endl;
    }

    // Calculate average
    float average = (float)total / students;

    cout << "\nTotal Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    // Find highest and lowest marks
    int highest = marks[0];
    int lowest = marks[0];

    for (int i = 1; i < students; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }

        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    cout << "Highest Marks: " << highest << endl;
    cout << "Lowest Marks: " << lowest << endl;

    // Count passed and failed students
    int passed = 0;
    int failed = 0;

    for (int i = 0; i < students; i++) {
        if (marks[i] >= 50) {
            passed++;
        } else {
            failed++;
        }
    }

    cout << "Passed Students: " << passed << endl;
    cout << "Failed Students: " << failed << endl;

    cout << "\n===== PROJECT COMPLETED =====" << endl;


    return 0;
}
