#include<iostream>
using namespace std;
class bank{
    int amount;
    string name;
    public:
    bank(){
        amount=0;
        name="xyz";
    }
    friend void depo(bank &b);
    friend void witho(bank &b);
    void print(){
        cout<<name<<"  "<<amount;
    }
    void input(){
        cin>>name>>amount;
    }
};
void depo(bank &b){
    int x;
    cin>>x;
    b.amount=b.amount+x;
}
void witho(bank &b){
    int y;
    cin>>y;
    if(b.amount>y){
        b.amount=b.amount-y;
    }
    else{
        cout<<"Low bank balance"<<endl;
    }
    
}
int main(){
    bank b;
    b.input();
    int a;
    cin>>a;
    if(a==1){
        depo(b);
    }
    else{
        witho(b);
    }
    b.print();
}