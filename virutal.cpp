#include<iostream>
#include<string.h>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    person(){
        name="xyz";
        age=0;
    }
    virtual void set(){
        cin>>name>>age;
    }
    virtual void get(){
        cout<<name<<" "<<age<<" "<<endl;
    }
};
class professor:public person{
    private:
    int pub;
    int empid;
    static int eid;
    public:
    professor(){
        pub=0;
        eid++;
        empid=eid;
    }
    void set(){
        person::set();
        cin>>pub;
    }
    void get(){
        person::get();
        cout<<pub<<" "<<empid<<" ";
        
    }
};
int professor::eid=0;
class student:public person{
    private:
    int m[3];
    int stdid;
    static int sid;
    public:
    student(){
        sid++;
        stdid=sid;
    }
    void set(){
        person::set();
        for(int i=0;i<3;i++){
            cin>>m[i];
        }
    }
    void get(){
         person::get();
        for(int i=0;i<3;i++){
            cout<<m[i];
        }
        cout<<stdid;
    }
};
int student::sid=0;
int main(){
    student s;
    professor p;
    person * ptr;
    ptr=&s;
    ptr->set();
    ptr->get();
    ptr=&p;
    ptr->set();
    ptr->get();
}
