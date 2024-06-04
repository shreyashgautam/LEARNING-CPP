#include<iostream>
#include<string.h>
using namespace std;
class account{
    private:
    int accno;
    string name;
    int balance;
    public:
    account(){
        accno=0;
        name="fgh";
        balance=0;
    }
    account(int no,string naam,int bal){
        accno=no;
        name=naam;
        balance=bal;
    }
    void set(){
        cin>>accno;
        cin>>name;
        cin>>balance;

    }
    void deposit(){
        int depos;
        cin>>depos;
        balance=balance+depos;
        cout<<balance;
    }
    void withdraw(){
        int draw;
        cin>>draw;
        balance=balance-draw;
        cout<<balance;
    }
    void get(){
        cout<<"acc no."<<accno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"balance"<<balance<<endl;
       
    }
};
int main(){
    account acc;
    acc.set();
    acc.deposit();
    acc.withdraw();
    acc.get();
}
