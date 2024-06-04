#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    if(a==1 || a==0){
        cout<<"can't check";
    }
    else{
        int x=0;
        for(int i=2;i<=a/2;i=i+1){
            
            if(a%i==0){
                x=x+1;
                break;
            }
        }
            if(x==0){
               cout<<"prime number";
            }
            else{
                cout<<"composite number";
            }

        
    }
}