# include <bits/stdc++.h>
using namespace std;
void data(int x){
    x=50;
    cout<<"x: "<<x<<endl;
}
void change(int &x){
    x=50;
    cout<<"x: "<<x<<endl;
}
int main(){
    int m=100;
    cout<<"Call by value"<<endl;
    data(m);
    // it will make a copy of m and will not have any effect on the original value of m
    cout<<"m: "<<m<<endl;
    cout<<"Call by reference "<<endl;
    change(m);
    //  it will make changes in m value itself
    cout<<"m: "<<m;

}