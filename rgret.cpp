#include<iostream>
#include<string.h>
using namespace std;
class product{
    int id;
    string name;
    int quant;
    float price;
    public:
    product(){
        id=0;
        name="rf";
        quant=0;
        price=0;

    }
    ~product(){
        cout<<"object is destroyed";
    }
    void read(){
        cin>>id;
        cin>>name;
        cin>>quant;
        cin>>price;
    }
    void print(){
        cout<<id;
        cout<<name;
        cout<<quant;
        cout<<price;
    }
};
int main()
{
    product p;
    p.read();
    p.print();
}
