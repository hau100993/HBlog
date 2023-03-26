* Composite Design Example (by ChatGPT):

```c++
#include <iostream>
#include <vector>

using namespace std;

// Component
class Employee {
public:
    virtual void displayInfo() = 0;
};

// Leaf
class Developer : public Employee {
public:
    Developer(string name, string position) {
        this->name = name;
        this->position = position;
    }
    void displayInfo() {
        cout << "Name: " << name << ", Position: " << position << endl;
    }
private:
    string name, position;
};

// Composite
class Manager : public Employee {
public:
    Manager(string name, string position) {
        this->name = name;
        this->position = position;
    }
    void addEmployee(Employee* emp) {
        employees.push_back(emp);
    }
    void displayInfo() {
        cout << "Name: " << name << ", Position: " << position << endl;
        for (auto emp : employees) {
            emp->displayInfo();
        }
    }
private:
    string name, position;
    vector<Employee*> employees;
};

// Client code
int main() {
    Developer* d1 = new Developer("John", "Developer");
    Developer* d2 = new Developer("Alice", "Developer");

    Manager* m1 = new Manager("Bob", "Manager");
    m1->addEmployee(d1);
    m1->addEmployee(d2);

    Developer* d3 = new Developer("Mike", "Developer");
    Developer* d4 = new Developer("Sarah", "Developer");

    Manager* m2 = new Manager("Peter", "Manager");
    m2->addEmployee(d3);
    m2->addEmployee(d4);
    m2->addEmployee(m1);

    m2->displayInfo();  // print the info of the whole hierarchy
    return 0;
}

```