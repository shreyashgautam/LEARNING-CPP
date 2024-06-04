#include<iostream>
using namespace std;
class a{
    public:
    virtual void display(){
        cout<<"base class content"<<endl;
    }
};
class b:public a{
    public:
    virtual void display(){
        cout<<"derived class content"<<endl;
    }
};
int main(){
    a * ptr;
    b d1;
    a d2;
    ptr=&d1;
    ptr->display();
    ptr=&d2;
    ptr->display();
    delete ptr;
}