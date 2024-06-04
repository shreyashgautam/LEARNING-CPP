#include<iostream>
using namespace std;
class shape{
    public:
    virtual void get()=0;
    virtual void area()=0;
};
class circle:public shape{
    int r;
    public:
    void get(){
        cin>>r;
    }
    void area(){
        cout<<r*r*3.14<<endl;
    }
};
class rect:public shape{
    int l;
    int b;
    public:
    void get(){
        cin>>l>>b;
    }
    void area(){
        cout<<l*b<<endl;
    }
};
class square:public shape{
    int a;
    public:
    void get(){
        cin>>a;
    }
    void area(){
        cout<<a*a<<endl;
    }
};
int main(){
    shape * s;
    rect r;
    square s1;
    circle c;
    s=&c;
    s->get();
    s=&r;
    s->get();
    s=&s1;
    s->get();
    s=&c;
    s->area();
    s=&r;
    s->area();
    s=&s1;
    s->area();
}