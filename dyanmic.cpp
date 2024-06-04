#include<iostream>
using namespace std;
class animal{
    public:
    void virtual speak(){
        cout<<"i am speaking"<<endl;
    }
};
class dog:public animal{
    public:
    void speak(){
        cout<<"i am barking"<<endl;  
    }
};
class human:public animal{
    public:
    void speak(){
        cout<<"i am talking"<<endl;
    }
};
int main(){
    dog d;
    animal * ptr;
    animal a;
    ptr=&d;
    ptr->speak();
    ptr=&a;
    ptr->speak();
    human h;
    ptr=&h;
    ptr->speak();
}