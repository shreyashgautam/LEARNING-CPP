#include<iostream>
using namespace std;
class human{
    protected:
    string name;
    int age;
    char sex;
    
    void naa(){
        cout<<"my name is "<<name<<endl;
    }
};
class youtube:protected virtual human{
    protected:
    int subs;
    public:
    void sub(){
        cout<<"my subscriber base is "<<subs<<endl;
    }

};
class enge:protected virtual human{
    protected:
    string spec;
    public:
    void details(){
        cout<<"my specialization is "<<spec<<endl;
    }
};
class code:protected enge,protected youtube{
    public:
    void all(){
        
        details();
        sub();
        naa();
    }
    void inp(){
        cin>>name>>sex>>age>>subs>>spec;
    }
};
int main(){
    code c1;
    c1.inp();
    c1.all();
}