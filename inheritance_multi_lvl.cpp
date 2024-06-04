#include<iostream>
using namespace std;
class student1{
    protected:
    int marks;
    int age;
};
class student2:protected student1{
    protected:
    char name[100];
    char grade;
};
class newstudent:protected student2{
    public:
    void inp(){
        cin>>name>>grade>>age>>marks;
    }
    void out(){
        cout<<name<<grade<<age<<marks;
    }
};
int main(){
    newstudent n1;
    n1.inp();
    n1.out();
}