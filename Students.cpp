#include "student.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<Student> students;

void addStudent() {
    Student s;
    cout << "Enter ID: ";
    cin >> s.id;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Age: ";
    cin >> s.age;
    cout << "Enter Course: ";
    cin >> s.course;
    students.push_back(s);
    cout << "Student added successfully!\n";
}

void displayStudents() {
    if (students.empty()) {
        cout << "No students to display.\n";
        return;
    }
    for (size_t i = 0; i < students.size(); i++) {
        cout << "ID: " << students[i].id << ", Name: " << students[i].name
             << ", Age: " << students[i].age << ", Course: " << students[i].course << endl;
    }
}

void searchStudent() {
    int id;
    cout << "Enter student ID to search: ";
    cin >> id;
    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            cout << "Found: ID: " << students[i].id << ", Name: " << students[i].name
                 << ", Age: " << students[i].age << ", Course: " << students[i].course << endl;
            return;
        }
    }
    cout << "Student not found.\n";
}

void updateStudent() {
    int id;
    cout << "Enter student ID to update: ";
    cin >> id;
    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            cout << "Enter new Name: ";
            cin >> students[i].name;
            cout << "Enter new Age: ";
            cin >> students[i].age;
            cout << "Enter new Course: ";
            cin >> students[i].course;
            cout << "Student updated successfully!\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

void deleteStudent() {
    int id;
    cout << "Enter student ID to delete: ";
    cin >> id;
    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            students.erase(students.begin() + i);
            cout << "Student deleted successfully!\n";
            return;
        }
    }
    cout << "Student not found.\n";
}
