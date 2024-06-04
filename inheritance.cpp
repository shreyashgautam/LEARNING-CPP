#include<iostream>
using namespace std;
class student{
    protected:
    string name;
    int age;
    int marks;
};
class higher:public student{
    public:
    void inp(){
        cin>>name>>age>>marks;
    }
    void print(){
        cout<<name<<age<<marks;
    }
};
int main(){
    higher h1;
    h1.inp();
    h1.print();
}