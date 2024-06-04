#include<iostream>
using namespace std;
class shape{
    public:
    virtual void area()=0;
    virtual void set()=0;
};
class rect:public shape{
    int l;
    int b;
    public:
    rect(){
        l=0;
        b=0;
    }
    void set(){
        cin>>l>>b;
    }
    void area(){
        cout<<l*b;
    }
};
class square:public shape{
    int a;
    public:
    square(){
        a=0;
    }
    void set(){
        cin>>a;
    }
    void area(){
        cout<<a*a;
    }
};
class circle:public shape{
    int r;
    public:
    circle(){
        r=0;
    }
    void set(){
        cin>>r;
    }
    void area(){
        cout<<r*r*3.14;
    }
};
int main(){
    shape *ptr;
    rect r;
    square s;
    circle c;
    ptr=&r;
    ptr->set();
    ptr=&s;
    ptr->set();
    ptr=&c;
    ptr->set();
    ptr=&r;
    ptr->area();
    ptr=&s;
    ptr->area();
    ptr=&c;
    ptr->area();
}