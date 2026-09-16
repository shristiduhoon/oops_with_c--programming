#include<iostream>
using namespace std;

class ResultAnalyzer;

class StudentResult{
private:
    int rollNo;
    string name;
    int m1,m2,m3;

public:
    static int totalStudent;

    StudentResult(int r,string n,int mr1,int mr2,int mr3){
        rollNo=r;
        name=n;
        m1=mr1;
        m2=mr2;
        m3=mr3;
        totalStudent++;
    }
    ~StudentResult(){
        cout<<"object destroyed "<<totalStudent<<endl;
        totalStudent--;
    }
    static void showTotalStudents(){
        cout<<"Total Students: "<<totalStudent<<endl;
    }
    friend class ResultAnalyzer;
};

int StudentResult::totalStudent=0;
class ResultAnalyzer{
public:
    void analyze(StudentResult &s){
        int total=s.m1+s.m2+s.m3;
        double percentage=total/3.0;

        cout<<"Roll No: "<<s.rollNo<<endl;
        cout<<"Name: "<<s.name<<endl;
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<"%"<<endl;

        if(s.m1>=40&&s.m2>=40&&s.m3>=40)
            cout<<"Result: Pass"<<endl;
        else
            cout<<"Result: Fail"<<endl;
    }
};

int main(){
    StudentResult s1(101,"Shristi",85,90,88);
    StudentResult s2(102,"Saloni",75,35,80);
    StudentResult::showTotalStudents();
    ResultAnalyzer r;
    cout<<"\nStudent 1 Details"<<endl;
    r.analyze(s1);
    cout<<"\nStudent 2 Details"<<endl;
    r.analyze(s2);
    return 0;
}