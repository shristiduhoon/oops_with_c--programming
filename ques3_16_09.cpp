#include<iostream>
using namespace std;
class Patient{
    private:
    int id;
    string name;
    public:
    static int count;
    Patient(int i,string n){
        id=i;
        name=n;
        count++;
    }
    ~Patient(){
        count--;
        cout<<"Patient discharged: "<<count<<endl;
    }
    static void showcount(){
        cout<<"Count of patients : "<<count<<endl;

    }

};
int Patient::count=0;
int main(){
    Patient p1(100,"shristi");
    Patient::showcount();
    Patient p2(200,"saloni");
    Patient::showcount();
    Patient p3(300,"sapna");
    Patient::showcount();
    return 0;
}