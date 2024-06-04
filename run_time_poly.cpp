#include<iostream>
using namespace std;
class animal{
    public:
    void  speak(){
        cout<<"i am speaking"<<endl;
    }
};
class dog:public animal{
    public:
    void  speak(){
        cout<<"i am barking"<<endl;
    }
};
class lambra:public dog{
    public:
    void  speak(){
        cout<<"i am barking and i am lambra"<<endl;
    }
};
int main(){
    lambra l;
    l.speak();
    
}