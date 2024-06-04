#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=x/2;i>=0;i--){
        if(x%i==0){
            cout<<i;
            break;
        }
    }
}