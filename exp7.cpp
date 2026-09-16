#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    string name;

    // Static data member (shared by all objects)
    static int Count;

public:
    // Constructor
    Employee(int id, string n)
    {
        empId = id;
        name = n;
        Count++;
    }

    // Static member function
    static void showCount()
    {
        cout << "Total Count: " << Count << endl;
    }

    // Friend function declaration
    friend void displayEmployee(Employee e);
};

// Definition of static data member
int Employee::Count = 0;

// Friend function definition
void displayEmployee(Employee e)
{
    cout << "ID: " << e.empId << endl;
    cout << "Name: " << e.name << endl;
}

int main()
{
    Employee e1(101, "Shristi");
    Employee e2(102, "Aditya");
    Employee e3(103, "Aman");


    displayEmployee(e1);
    displayEmployee(e2);

    cout << endl;

   
    Employee::showCount();

    return 0;
}