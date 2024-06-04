#include<iostream>
#include<string.h>
using namespace std;
class human{
    protected:
    int age;
    char name[100];
    char sex;
};
class student:private human{
    int cl;
    int marks;
    public:
    student(){
        cl=0;
        marks=0;
        age=0;
        sex='a';
        strcpy(name,"xyz");
    }
    void inp(){
        cin>>name>>sex>>age>>cl>>marks;
    }
    void out(){
        cout<<name<<sex<<age<<cl<<marks;
    }
};
int main(){
    student s1;
    s1.inp();
    s1.out();
}