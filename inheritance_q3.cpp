//create a student class having pvt data member as roll number name and marks and then input it from user and print it.
#include<iostream>
#include<string.h>
using namespace std;
class student{
    private:
    int roll;
    char name[100];
    int mark;
    public:
    student(){
        roll=0;
        strcpy(name,"xyz");
        mark=0;
    }
    student(int x,char n[100],int z){
        roll=x;
        strcpy(name,n);
        mark=z;
    }
    void inp(){
        cin>>roll>>name>>mark;
    }
    void out(){
        cout<<roll<<name<<mark<<endl;
    }
    ~student(){
        cout<<"destroyer is called";
    }

};
int main(){
    student s2(100,"dipu",100);
    
    s2.out();
    
}