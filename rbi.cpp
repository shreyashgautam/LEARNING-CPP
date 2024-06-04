#include<iostream>
using namespace std;
class customer{
    protected:
    string name;
    int age;
    public:
    void read_customer(){
        cin>>name>>age;
    }
    void display_customer(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
class account{
    protected:
    int bal;
    int interest;
    int withdrawal;
    int deposit;
    public:
    void read_acoount(){
        cin>>bal>>interest>>withdrawal>>deposit;
    }
    void display_acoount(){
        cout<<bal<<endl;
        cout<<interest<<endl;
        cout<<withdrawal<<endl;
        cout<<deposit<<endl;
    }
};
class rbi{
    protected:
    int min_inter;
    int min_bal;
    int max_with;
    public:
    rbi(){
        min_inter=4;
        min_bal=10000;
        max_with=1000;
    }
};
class sbi:public customer,public rbi,public account{
    public:
    void read(){
        cin>>interest;
        if(interest<min_inter){
            interest=min_inter;
        }
        cin>>bal;
        if(bal<min_bal){

            bal=min_bal;
        }
        cin>>withdrawal;
        if(withdrawal>max_with){
            withdrawal=max_with;
        }
        cin>>deposit;
    }
};
int main(){
    sbi s;
    s.read_customer();
    s.read();
    
    s.display_acoount();
    s.display_customer();
}