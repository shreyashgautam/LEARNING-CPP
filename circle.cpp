#include<iostream>
using namespace std;
class circle{
    int radius;
    public:
    circle(int r){
        radius=r;
    }
    void area(){
        cout<<"area is "<<3.14*radius*radius<<endl;
    }
    void circ(){
        cout<<"\ncircumference is "<<2*3.14*radius<<endl;
    }
};
int main(){
    int r;
    cout<<"enter the radius";
    cin>>r;
    circle c1(r);
    c1.area();
    c1.circ();

}