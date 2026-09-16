#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:
  
    Student()
    {

        cout << "Default Constructor Called" << endl;
    }


    Student(int i, string n)
    {
        id = i;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    Student(const Student &s)
    {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }


    void display()
    {
        cout << "ID: " << id << ", Name: " << name << endl;
    }


    ~Student()
    {
        cout << "Destructor Called " << name << endl;
    }
};

int main()
{

    Student s1;             

  
    Student s2(101, "Shristi");   

  
    Student s3 = s2;             

  
    s1.display();
    s2.display();
    s3.display();

 

    return 0;
}