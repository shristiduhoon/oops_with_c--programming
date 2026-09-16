#include<iostream>
using namespace std;

class University{
private:
    string universityName;

public:
    University(string name){
        universityName=name;
    }

    class Department{
    private:
        string departmentName;
        int studentCount;

    public:
        Department(string dname,int count){
            departmentName=dname;
            studentCount=count;
        }

        void display(University &u){
            cout<<"University Name: "<<u.universityName<<endl;
            cout<<"Department Name: "<<departmentName<<endl;
            cout<<"Student Count: "<<studentCount<<endl;
        }
    };
};

int main(){
    University u("AKTU university");
    University::Department d("AIML",120);

    d.display(u);

    return 0;
}