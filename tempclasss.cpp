#include<iostream>
using namespace std;
template<class t>
class vector{
    t real;
    t img;
    public:
    vector(){

    }
    vector(t a,t b){
        real=a;img=b;
    }
    void display(){
        cout<<real<<"  "<<img<<endl;
    }
    vector operator +(vector v){
        vector temp;
        temp.real=real+v.real;
        temp.img=img+v.img;
        return temp;
    }
    vector operator -(vector v){
        vector temp;
        temp.real=real-v.real;
        temp.img=img-v.img;
        return temp;
    }
    vector operator *(vector v){
        vector temp;
        temp.real=real*v.real-img*v.img;
        temp.img=real*v.img+img*v.real;
        return temp;
    }
};
int main(){
    vector<int> one(1,2);
    vector<int>two(2,3);
    vector<int>sum;
    sum=one+two;
    sum.display();
    vector<int>diff;
    diff=one-two;
    vector<int>product;
    product=one*two;
    diff.display();
    product.display();
    vector<float> f1(1.22,4.5);
    vector<float> f2(2.44,5.6);
    vector<float>sumf;
    sumf=f1+f2;
    sumf.display();
}