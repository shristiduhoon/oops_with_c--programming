# include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int roll;
    string name;
    void input(){
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter roll number: ";
        cin>>roll;
    }
    void display(){
        cout<<"NAME:"<<name<<endl<<"Roll NO.:"<<roll<<endl;
    }
    void displaygrade(){
        float per;
        cout<<"Enter percentage:";
        cin>>per;
        if(per>=90){
            cout<<"Division: 1st";
        }
        else if(per>=60 && per<90){
            cout<<"Division: 2nd";
        }
        else if(per>=35 && per<60){
            cout<<"Division: 3rd";
        }
        else{
            cout<<"Fail";
        }


    }



};
int main(){
    student s;
    s.input();
    s.display(); 
    s.displaygrade();
}
