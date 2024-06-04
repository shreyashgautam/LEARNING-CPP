#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
    public:
    virtual void getData()
    {
        cin>>name>>age;
    }
    virtual void putData()
    {
        cout<<name<<" "<<age<<" ";
    }
};
class Professor: public Person
{
    int pub;
    int empid;
    static int e;
    public:
    Professor()
    {
        e++;
        empid=e;
    }
   void getData()
    {
        Person::getData();
        cin>>pub;
    }
     void putData()
    {
        Person::putData();
        cout<<pub<<" "<<"ID:"<<empid<<"\n";
    }
};
int Professor::e=0;
class Student: public Person
{
    int m[3];
    int id;
    static int s;
    public:
    Student()
    {
        s++;
        id=s;
    }
    void getData()
    {
        Person::getData();
        cin>>m[0]>>m[1]>>m[2];
    }
     void putData()
    {
        Person::putData();
        cout<<m[0]<<" "<<m[1]<<" "<<m[2]<<" "<<"ID:"<<id<<"\n";
    }
};
int Student::s=0;
int main()
{
    Professor P1,P2;
    Person *ptr;
    ptr=&P1;
    ptr->getData();
    ptr=&P2;
    ptr->getData();
    Student S1,S2;
    ptr=&S1;
    ptr->getData();
    ptr=&S2;
    ptr->getData();
    ptr=&P1;
    ptr->putData();
    ptr=&P2;
    ptr->putData();
    ptr=&S1;
    ptr->putData();
    ptr=&S2;
    ptr->putData();
}