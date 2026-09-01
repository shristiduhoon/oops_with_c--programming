// #include <iostream>
// using namespace std;
// class employee{
//     private:
//     int id,salary;
//     string name;
//     public:
//     void input();
//     void display();
    
// };
// void employee::input(){
//         cout<<"Enter id";
//         cin>>id;
//         cout<<"enter name";
//         cin>>name;
//         cout<<"enter salary:";
//         cin>>salary;
// }
// void employee::display(){
//         cout<<"id:"<<id<<endl;
//         cout<<" name:"<<name<<endl;
//         cout<<"salary:"<<salary<<endl;
// }


// int main(){
//     employee s;
//     s.input();
//     s.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class student{
//     public:
//     int roll,marks;
//     string name;
 
//     void input(){
//         cout<<"Enter roll no.";
//         cin>>roll;
//         cout<<"enter name:";
//         cin>>name;
//         cout<<"enter marks:";
//         cin>>marks;
//     }
//     void display(){
//         cout<<"roll:"<<roll<<endl;
//         cout<<" name:"<<name<<endl;
//         cout<<"marks:"<<marks<<endl;
// }
// };
// int main(){
//     student s;
//     s.input();
//     s.display();
//     return 0;
// }

#include <iostream>
using namespace std;
void valueswap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
void refswap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10;
    int y=20;
    cout<<"before swap "<<"x="<<x<<" y="<<y<<endl;
    valueswap(x,y);
    cout<<"After call by value swap "<<"x="<<x<<" y="<<y<<endl;
    refswap(x,y);
    cout<<"after call by refrence swap "<<"x="<<x<<" y="<<y<<endl;
}