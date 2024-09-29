#include <iostream>
#include <string>
using namespace std;


struct Student {
    int rollNo;
    string name;
    int age;
    float marks;
};

int main() {
    Student students[10] = {
        {1, "A", 20, 85.5},
        {2, "B", 19, 78.0},
        {3, "C", 21, 88.6},
        {4, "D", 20, 90.0},
        {5, "E", 19, 76.4},
        {6, "F", 22, 92.3},
        {7, "G", 21, 81.2},
        {8, "H", 22, 89.7},
        {9, "I", 20, 84.9},
        {10, "J", 21, 91.5}
    };

    cout << "Details of all students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Roll No: " << students[i].rollNo << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << endl;
    }
    return 0;


}
