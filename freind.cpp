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
    friend void printdetails(person &p1);
    
};
void printdetails(person &p1){
    cout<<p1.eno<<p1.desc<<p1.name<<p1.sales<<p1.bonus;
}
int main(){
    person p1;
    p1.read();
    p1.sal();
    printdetails(p1);
}