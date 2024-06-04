#include<iostream>
using namespace std;
class shape{
    private:
    float radius;
    public:
    void circlearea(float r,float pi){
        cout<<pi*r*r<<endl;
    }
    void sphere(float r,float pi){
        cout<<4*pi*r*r<<endl;
    }
    void hemisphere(float r,float pi){
        cout<<3*pi*r*r<<endl;
    }
    shape(){
        radius=0;
    }
};
int main(){
    float r;
    cin>>r;
    shape s;
    s.circlearea(r,3.14);
    s.sphere(r,3.14);
    s.hemisphere(r,3.14);
}