#include<iostream>
using namespace std;
class vector{
    int x;
    int y;
    int z;
    public:
    vector(){
        x=0;
        y=0;
        z=0;
    }
    void read(){
        cin>>x>>y>>z;
    }
    void print(){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    vector operator +(vector v2){
        vector v3;
        v3.x=x+v2.x;
        v3.z=z+v2.z;
        v3.y=y+v2.y;
        return v3;
    }
    vector operator -(vector v2){
        vector v3;
        v3.x=x-v2.x;
        v3.z=z-v2.z;
        v3.y=y-v2.y;
        return v3;
    }
    vector operator *(vector v2){
        vector v3;
        v3.x=x*v2.x;
        v3.z=z*v2.z;
        v3.y=y*v2.y;
        return v3;
    }
};
int main(){
    vector v1,v2;
    v1.read();
    v2.read();
    v1.print();
    v2.print();
    vector v3=v1+v2;
    vector v4=v1-v2;
    vector v5=v1*v2;
    v3.print();
    v4.print();
    v5.print();
}