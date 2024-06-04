#include<iostream>
using namespace std;
class student{
    int age;
    string name;
    int mark;
    public:
    student(){
        age=0;
        name="shreyash";
        mark=0;
    }
    void get(){
        cin>>age;
        cin>>name;
        cin>>mark;
    }
    void print(){
        cout<<age<<name<<mark<<endl;
    }
    student(int a,string x,int b){
        age=a;
        name=x;
        mark=b;
    }
};
int main(){
    student s1(10,"shre",10);//parametric constructor
    student s2;//input values
    student s3;//default contructor
    s2.get();
    s1.print();
    s2.print();
    s3.print();
}