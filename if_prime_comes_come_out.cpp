#include<iostream>
using namespace std;
int main(){
    for(int i=0;i=10;i=i+1){
        int a;
        int b=0;
        cin>>a;
        for(int j=2;j=a/2;j=j+1){
            if(a%j==0){
                b=b+1;
                break;
            }
            else{
                b=0;
            }
        }
        if(b==0){
            cout<<"ended";
            break;
        }
    }
    return 0;
}