#include<iostream>
using namespace std;
class bank{
    static int id;
    int sid;
    
    public:
    bank(){
        id++;
        sid=id;
    }
    int get(){
        return sid;
    }
    
};
int func (bank b[],int n,int i,int pin){
    if(n==i){
        return pin;
    }
    else{
        pin=pin+b[i].get();
        i++;
    }
}

int bank::id=0;
int main(){
    int n;
    cin>>n;
    bank b[n];
    int i=0;
    int pin=0;
    cout<<func(b,n,i,pin);

}