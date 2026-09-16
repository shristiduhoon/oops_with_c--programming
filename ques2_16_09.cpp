# include<iostream>
using namespace std;
class Bankaccount{
    private:
    int accountno;
    string name;
    double balance;
    public:
    Bankaccount(int accno,string n,int b){
        accountno=accno;
        name=n;
        balance=b;
    }
    friend void comparebalance(Bankaccount b1,Bankaccount b2);
};
void comparebalance(Bankaccount b1,Bankaccount b2){
    if(b1.balance>b2.balance){
        cout<<b1.accountno <<" has higher balance of "<<b1.balance;
    }
    else{
        cout<<b2.accountno <<" has higher balance of "<<b2.balance;
    }
}
int main(){
    Bankaccount b1(1010,"shristi",5500);
    Bankaccount b2(1045,"saloni",4690);
    comparebalance(b1,b2);
    return 0;
}
