#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    void read(){
        cin>>real>>img;
    }
    void print(){
        cout<<real<<" "<<img<<endl;
    }
    // void operator +(complex c2){
    //     real=real+c2.real;
    //     img=img+c2.img;
    // }
    // void operator -(complex c2){
    //     real=real-c2.real;
    //     img=img-c2.img;
    // }
    // void operator =(complex c2){
    //     real=c2.real;
    //     img=c2.img;
    // }
    // void operator ++(){
    //     real=real+1;
    //     img=img+1;
    // }
    complex operator +(complex c2){
        complex c3;
        c3.real=real+c2.real;
        c3.img=img+c2.img;
        return c3;
    }
    complex operator -(complex c2){
        complex c4;
        c4.real=real-c2.real;
        c4.img=img-c2.img;
        return c4;
    }
};
int main(){
    complex c1,c2;
    c1.read();
    c2.read();
    // complex c3;
    // c1.print();
    // c3=c1;
    // c1-c2;
    // ++c2;
    // c3.print();
    complex c3;
    c3=c1+c2;
    complex c4;
    c4=c1-c2;   
    c3.print();
    
}