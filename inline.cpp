# include <bits/stdc++.h>
using namespace std;
// you can only use inline function for small codes and it will store the result
inline int add(int a,int b){
    int c=a+b;
    return c;
}
void dataprint(string name="Shristi"){
    cout<<name<<endl;
}
int main(){
    int d=10;
    int e=20;
    cout<<"Inline function"<<endl;
    cout<<add(d,e)<<endl;
    cout<<add(30,40)<<endl;
    cout<<"Default argument"<<endl;
    dataprint();
    dataprint("stuti");
    
}