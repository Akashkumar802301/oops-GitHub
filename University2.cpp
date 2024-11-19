#include <iostream>
using namespace std;
//USE SETTER GETTER METHOD
//ALTERNATIVE OF CONSTRUCTOR
class Employee {
// public:
   protected://IT MEANS WE CAN ACCESS PROTECTED SPECIFIER IN THIS WAY.
    string name;
    int emp_id;
    double salary;
    public:

    void setEmployee(string name, int emp_id, double salary) {
        this->name = name;
        this->emp_id = emp_id;
        this->salary = salary;
    }

    double getSalary() {
        return salary;
    }
};

class Professor : public Employee {
// public:
protected://IF WE COMMENTED PROTECTED SPECIFIER AND ENABLE PUBLIC SPECIFIER,THEN ALSO CODE WILL BE RUN.
    string dept;
    public:

    void setProfessor(string name, int emp_id, double salary, string dept) {
        setEmployee(name, emp_id, salary);
        this->dept = dept;
    }

    void MonthlySalary() {
        salary += salary / 10;
    }
};

class AdminStaff : public Professor {
// public:
protected:
    string position;
    public:

    void setAdminStaff(string name, int emp_id, double salary, string dept, string position) {
        setProfessor(name, emp_id, salary, dept);
        this->position = position;
    }

    void GiveSalary() {
        salary += salary / 20;
    }
};

class Janitor : public AdminStaff {
// public:
protected:
    float working_hour;
    public:

    void setJanitor(string name, int emp_id, double salary, string dept, string position, float working_hour) {
        setAdminStaff(name, emp_id, salary, dept, position);
        this->working_hour = working_hour;
    }

    void give_salary() {
        salary = salary * working_hour;
    }
};

int main() {
    int salary;
    cout << "Enter your salary: ";
    cin >> salary;

    Employee emp;
    emp.setEmployee("Employee 1", 1, salary);
    Professor prof;
    prof.setProfessor("Professor 1", 2, salary, "Computer Science");
    AdminStaff admin;
    admin.setAdminStaff("Admin Staff 1", 3, salary, "Administration", "Manager");
    Janitor janitor;
    janitor.setJanitor("Janitor 1", 4, salary, "Maintenance", "Cleaner", 2.5);

    prof.MonthlySalary();
    admin.GiveSalary();
    janitor.give_salary();

    cout << "Employee salary: " << emp.getSalary() << endl;
    cout << "Professor salary: " << prof.getSalary() << endl;
    cout << "Admin Staff salary: " << admin.getSalary() << endl;
    cout << "Janitor salary: " << janitor.getSalary() << endl;

    return 0;
}