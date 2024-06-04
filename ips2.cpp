//class shape having pvt member as radius and member function as circle area and a parametric constructor to get value of radius
#include<iostream>
using namespace std;
class shape{
    private:
    float radius;
    public:
    void circlearea(){
        cout<<3.14*radius*radius;
    }
    shape(float r){
        radius=r;
    }
    shape(){
        radius=0;
    }
};
int main(){
    float r;
    cin>>r;
    shape s1;
    shape s2(r);
    s2.circlearea();
    
}