#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    Student(string n = "", int m = 0)
    {
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "Name: " << name<<endl;
        cout << "Marks: " << marks;
    }

    // Function that takes two objects as arguments
    static Student compare(Student s1, Student s2)
    {
        if (s1.marks > s2.marks)
            return s1;   // Returning an object
        else
            return s2;   // Returning an object
    }
};

int main()
{
    Student s1("Saloni", 85);
    Student s2("Shristi", 92);

    // Object returned from function
    Student topper = Student::compare(s1, s2);

   

    cout << "\nTopper:" << endl;
    topper.display();

    return 0;
}