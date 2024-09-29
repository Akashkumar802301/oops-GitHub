#include<bits/stdc++.h>
using namespace std;

class Patient {
    long p_id;
    string name;
    int age;
    string disease;
    int roomNo;

public:
    Patient() {}

    Patient(long p_id, string name, int age, string disease, int roomNo) {
        this->p_id = p_id;
        this->name = name;
        this->age = age;
        this->disease = disease;
        this->roomNo = roomNo;
    }

    string getName() {
        return name;
    }

    long getId() {
        return p_id;
    }

    void displayDetails() {
        cout << "Patient ID: " << p_id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Disease: " << disease << "\n";
        cout << "Room No: " << roomNo << "\n";
    }
};

class Hospital {
    Patient* arr;
    int count;
    int max_len;

public:
    Hospital() {
        max_len = 100;
        count = 0;
        arr = new Patient[max_len];
    }

    ~Hospital() {
        delete[] arr;
    }
};
