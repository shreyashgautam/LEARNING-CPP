#include<iostream>
using namespace std;
int a=13;
int main(){
    int a;
    a=10;
    cout<<"value of a"<<a;
    cout<<"\n global_value of a"<<::a;
    return 0;
}