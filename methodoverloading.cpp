# include <bits/stdc++.h>
using namespace std;
class student {
    public:
    void display(string name){
        cout<<"Name is: "<<name<<endl;
    }
    void display(string name,int roll){
        cout<<name <<" is given roll no. : "<<roll<<endl;
    }
    void display(float per,int roll){
        cout<<roll<<" roll no. has achieved percentage of "<<per<<endl;
    }
};
int main(){
    student s;
    int roll;
    float per;
    string name;
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter roll number: ";
    cin>>roll;
    cout<<"Enter percentage: ";
    cin>>per;
    s.display(name);
    s.display(name,roll);
    s.display(per,roll);
}