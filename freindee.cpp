#include<iostream>
using namespace std;
class new1{
    int x;
    int y;
    static int count;
    public:
    new1(){
        x=0;
        y=0;
        count++;
    }
    new1(int a,int b){
        x=a;
        y=b;
    }
    friend void print(new1 &n);
    friend void input(new1 &n);
    friend class sex;
};
int new1::count=0;
class sex{
    int z;
    public:
    void printd(new1 &n){
        cout<<n.x<<" "<<n.y<<endl;
        cout<<"count is "<<n.count<<endl;
    }
};
void print(new1 &n){
    cout<<n.x;
    cout<<n.y;
}
void input(new1 &n){
    cin>>n.x;
    cin>>n.y;
}
int main(){
    new1 n;
    sex s;
    sex s1;
    sex s3;
    sex s4;
    sex s5;
    sex s6;
    sex s7;
    sex s8;
    input(n);
    s8.printd(n);
}