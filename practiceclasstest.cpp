#include <iostream>
using namespace std;
class employee{
    private:
    int id,salary;
    string name;
    public:
    void input();
    void display();
    
};
void employee::input(){
        cout<<"Enter id";
        cin>>id;
        cout<<"enter name";
        cin>>name;
        cout<<"enter salary:";
        cin>>salary;
}
void employee::display(){
        cout<<"id:"<<id<<endl;
        cout<<" name:"<<name<<endl;
        cout<<"salary:"<<salary<<endl;
}


int main(){
    employee s;
    s.input();
    s.display();
    return 0;
}