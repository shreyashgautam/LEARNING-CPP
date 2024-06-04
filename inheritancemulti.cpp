#include<iostream>
using namespace std;
class student{
    protected:
    int marks;
    int age;
};
class student1{
    protected:
    char name[100];
    int clas;
};
class news:protected student,protected student1{
    public:
    void inp(){
        cin>>name>>clas>>marks>>age;
    }
    void out(){
        cout<<name<<clas<<marks<<age;
    }
};
int main(){
    news n;
    n.inp();
    n.out();
}