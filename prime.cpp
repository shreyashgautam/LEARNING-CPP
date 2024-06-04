#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int temp=0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            temp++;
            break;
        }
    }
    if(temp==0){
        cout<<"prime number";
    }
    else{
        cout<<"composite number";
    }
}