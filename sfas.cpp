#include<iostream>
using namespace std;
class point{
    int x;
    int y;
    public:
    point(){
        x=0;
        y=0;
    }
    point(int a,int b){
        x=a;
        y=b;
    }
    void read(){
        cin>>x;
        cin>>y;
    }
    void print(){
        cout<<"X="<<x<<endl;
        cout<<"Y="<<y<<endl;
    }
    void add(){
        cout<<"Sum="<<x+y<<endl;
        
    }
};
int main(){
    point obj1;
    obj1.read();
    obj1.print();
    obj1.add();
    int a;
    cin>>a;
    int b;
    cin>>b;
    point obj2(a,b);
    obj2.print();
    obj2.add();
    
    
}