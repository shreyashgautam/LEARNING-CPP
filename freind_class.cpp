#include<iostream>
using namespace std;
class person{
    int eno;
    string desc;
    string name;
    int sales;
    int bonus;
    public:
    void read(){
        cin>>eno>>desc>>name>>sales;
    }
    void sal(){
        if(sales<100){
            bonus=1000;
        }
        else if(sales>100 && sales<500){
            bonus=5000;
        }
        else{
            bonus=10000;
        }
    }
    friend class sal;
    
};
class sal{
    float hra;
    float da;
    float basic;
    float pf;
    float gross;
    public:
    void read(){
        cin>>basic;
    }
    void print(){
        cout<<gross;
    }
    void calcsal(person &p){
        gross=0.15*basic+0.25*basic+basic-0.05*basic+p.bonus;
    }
};
int main(){
    person p1;
    p1.read();
    p1.sal();
    sal s1;
    s1.read();
    s1.calcsal(p1);
    s1.print();
}