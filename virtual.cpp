#include<iostream>
using namespace std;
class base{
    public:
    void show(){
        cout<<"show base";
    }
    virtual void print(){
        cout<<"print base";
    }
};
class derived:public base{
    public:
    void show(){
        cout<<"show derived";
    }
    void print(){
        cout<<"print derived";
    }
};
int main(){
    base * ptr;
    derived d;
    ptr=&d;
    ptr->show();
    ptr->print();
}