#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(int a,int b){
        real=a;
        img=b;
    }
   
    complex operator +(complex cc){
        complex temp;
        temp.real=real+cc.real;
        temp.img=img+cc.img;
        return temp;
    }
    complex operator -(complex cc){
        complex temp1;
        temp1.real=real-cc.real;
        temp1.img=img-cc.img;
        return temp1;
    }
    void operator ++(){
        ++real;
        ++img;

    }
    void print(){
        cout<<real<<" "<<img<<endl;
    }
    void operator == (complex cc){
        if(cc.img==img && cc.real==real){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    void operator !=(complex cc){
        if(cc.img==cc.img && cc.real==real){
            cout<<"True they are equal"<<endl;
        }
        else{
            cout<<"False they are not equal"<<endl;
        }
    }
    complex operator / (complex cc){
        complex temp3;
        temp3.real=real/cc.real;
        temp3.img=img/cc.img;
        return temp3;
    }
    complex operator *(complex cc){
        complex temp4;
        temp4.real=real*cc.real-img*cc.img;
        temp4.img=real*cc.img+img*cc.real;
        return temp4;
    }
};
int main(){
    complex c1(7,2);
    complex c2(4,5);
    complex c3;
    complex c4;
    c3=c1+c2;// using operator overloading to chnage the value of c3 as c1+c2
    c4=c2-c1;
    complex c6;
    c6=c1/c2;
    complex c5;
    complex c7;
    c7=c1*c2;
    c5=c1+c2+c3;
    c1==c2;
    c1!=c2;
    ++c1;
    c1!=c2;
    
    c3.print();
    c4.print();
    c1.print();
    c5.print();
    c6.print();
    c7.print();
}