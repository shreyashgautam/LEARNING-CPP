#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex operator +(complex c){
        complex temp;
        temp.img=img+c.img;
        temp.real=real+c.real;
        return temp;
    }
    complex operator -(complex c){
         complex temp;
        temp.img=img-c.img;
        temp.real=real-c.real;
        return temp;
    }
    void set(){
        cin>>real>>img;
    }
    void get(){
        cout<<real<<" "<<img<<endl;
    }
    void operator ++(){
        img++;
        real++;
    }
    friend  ostream & operator <<(ostream& out,complex c);
    friend istream & operator >>(istream& in,complex &c);
};
ostream & operator <<(ostream& out,complex c){
    out<<"OUTPUT IS "<<c.real<<" "<<c.img;
}
istream & operator >>(istream& in,complex &c){
    in>>c.real;
    in>>c.img;
}
int main(){
    complex c1;
    complex c2;
    complex c3;
    c1.set();
    c2.set();
    c3=c1-c2;
    ++c3;
    c3.get();
    cout<<c3;

}