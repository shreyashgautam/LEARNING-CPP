#include<iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;
    rectangle(){
        l=0;
        b=0;
    }
};
int main(){
    rectangle r1;
    cout<<r1.b<<r1.l;
}