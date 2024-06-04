#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int y;
    int z;
    cin>>y;
    cin>>z;
    if(x>y && x>z){
        cout<<"this is bigger : "<<x;
    }
    else if(y>x && y>z){
        cout<<"this is bigger : "<<y;
    }
    else{
        cout<<"this is bigger : "<<z;
    }
}