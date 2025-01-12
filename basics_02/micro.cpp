#include <iostream>
using namespace std;

// Structure to store student data
struct Student {
    string name;
    int rollNo;
    char section;
    char grade;
    float marks;
};

int main() {
    const int MAX_SIZE = 10;
    Student students[MAX_SIZE];
    int size = 0;

    while(true) {
        cout << "Student Record Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display Student\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";

        int option;
        cin >> option;

        switch (option) {
            // Add student here
            case 1: {
                if (size < MAX_SIZE) {
                    cout << "Enter name: ";
                    cin >> students[size].name;
                    cout << "Enter roll number: ";
                    cin >> students[size].rollNo;
                    cout << "Enter section: ";
                    cin >> students[size].section;
                    cout << "Enter grade (A-F): ";
                    cin >> students[size].grade;
                    cout << "Enter marks (0-100): ";
                    cin >> students[size].marks;
                    size++;
                    cout << "Student added successfully!" << endl;
                } else {
                    cout << "Maximum students reached!" << endl;
                }
                break;
            }
            // Display student here
            case 2: {
                if (size == 0) {
                    cout << "No students added!" << endl;
                } else {
                    cout << "Student Records:\n";
                    for (int i = 0; i < size; i++) {
                        cout << "Name: " << students[i].name << endl;
                        cout << "Roll Number: " << students[i].rollNo << endl;
                        cout << "Section: " << students[i].section << endl;
                        cout << "Grade: " << students[i].grade << endl;
                        cout << "Marks: " << students[i].marks << endl;
                        cout << endl;
                    }
                }
                break;
            }
            // Search student here
            case 3: {
                int rollNo;
                cout << "Enter roll number to search: ";
                cin >> rollNo;
                bool found = false;
                for (int i = 0; i < size; i++) {
                    if (students[i].rollNo == rollNo) {
                        cout << "Student Found:\n";
                        cout << "Name: " << students[i].name << endl;
                        cout << "Roll Number: " << students[i].rollNo << endl;
                        cout << "Section: " << students[i].section << endl;
                        cout << "Grade: " << students[i].grade << endl;
                        cout << "Marks: " << students[i].marks << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student not found!" << endl;
                }
                break;
            }
            // Delete student here
            case 4: {
                int rollNo;
                cout << "Enter roll number to delete: ";
                cin >> rollNo;
                bool deleted = false;
                for (int i = 0; i < size; i++) {
                    if (students[i].rollNo == rollNo) {
                        for (int j = i; j < size - 1; j++) {
                            students[j] = students[j + 1];
                        }
                        size--;
                        deleted = true;
                        cout << "Student record deleted!" << endl;
                        break;
                    }
                }
                if (!deleted) {
                    cout << "Student not found!" << endl;
                }
                break;
            }
            // Exit option here
            case 5:
                return 0;
            default:
                cout << "Invalid option!" << endl;
         }
    }
    return 0;
}