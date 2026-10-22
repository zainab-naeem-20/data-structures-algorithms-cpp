#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    int id;
    string name;
    float marks[3];
    float percentage;
    char grade;
};

void inputStudentDetails(Student &s);
void calculateResult(Student &s);
void displayStudentReport(const Student &s);

int main() {
    Student student1;

    cout << "\n========================================\n";
    cout << "     STUDENT GRADE MANAGEMENT SYSTEM    \n";
    cout << "========================================\n";

    inputStudentDetails(student1);
    calculateResult(student1);
    displayStudentReport(student1);

    return 0;
}

void inputStudentDetails(Student &s) {
    cout << "\nEnter Student ID: ";
    cin >> s.id;
    cin.ignore(); 

    cout << "Enter Student Full Name: ";
    getline(cin, s.name);

    cout << "Enter marks for 3 subjects (out of 100):\n";
    for(int i = 0; i < 3; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> s.marks[i];
    }
}

void calculateResult(Student &s) {
    float totalMarks = 0;
    for(int i = 0; i < 3; i++) {
        totalMarks += s.marks[i];
    }

    s.percentage = (totalMarks / 300.0) * 100;

    if(s.percentage >= 80) {
        s.grade = 'A';
    } else if(s.percentage >= 70) {
        s.grade = 'B';
    } else if(s.percentage >= 60) {
        s.grade = 'C';
    } else if(s.percentage >= 50) {
        s.grade = 'D';
    } else {
        s.grade = 'F';
    }
}

void displayStudentReport(const Student &s) {
    cout << "\n----------------------------------------\n";
    cout << "           STUDENT REPORT CARD          \n";
    cout << "----------------------------------------\n";
    cout << "Student ID  : " << s.id << endl;
    cout << "Student Name: " << s.name << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage  : " << s.percentage << "%" << endl;
    cout << "Final Grade : " << s.grade << endl;
    cout << "========================================\n";
}