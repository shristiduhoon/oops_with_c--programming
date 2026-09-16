# include<iostream>
using namespace std;
class Product{
    private:
    int id;
    string name;
    int price;
    public:
    Product(int id,string n,int p){
        id=id;
        name=n;
        price=p;
    }
    Product compareprice(Product &p2){
        if(price>p2.price){
            return *this;
        }
        else{
            return p2;
        }
    }
    void display(){
        cout<<"ID: "<<id<<" ,product "<<name<<" has higher price";
    }

};
int main(){
    Product p1(101,"towel",600);
    Product p2(201,"hand cream",1500);
    Product res=p1.compareprice(p2);
    res.display();
    return 0;
}