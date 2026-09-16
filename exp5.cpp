#include <bits/stdc++.h>
using namespace std;
class bankaccount{
    private:
    float balance;
    public:
    void setamount(float b){
        balance=b;
    }
    void deposit(float b){
        balance+=b;
        cout<<"Deposited"<<endl;
    }
    void withdraw(float b){
        if(balance>=b){
            cout<<"Withdrawn: "<<b<<endl;
            balance-=b;
        }
        else{
            cout<<"NOT sufficient balance to withdraw"<<endl;
        }
    }
    void show(){
        cout<<" Current Balance: "<<balance;
    }

};
int main(){
    bankaccount b;
    float n,w,s;
    cout<<"enter initial amount: ";
    cin>>s;
    b.setamount(s);
    cout<<"enter amount to deposit: ";
    cin>>n;
    b.deposit(n);
    cout<<"Enter amount to withraw: ";
    cin>>w;
    b.withdraw(w);
    b.show();
}