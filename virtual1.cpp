#include<iostream>
using namespace std;
class animal{
    public:
    virtual void set()=0;
    virtual void speak()=0;
};
class dog:public animal{
    public:
    void speak(){
        cout<<"I AM BARKING"<<endl;
    }
    void set(){
        cout<<"SETTING UP VALUES";
    }
};
