#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<"the prime numbers are\n"  ;
    for(int i=a;i<=b;i++){
        int x=0;
        
        for(int j=2;j<=i/2;j=j+1){
            if(i%j==0){
                x=x+1;
                break;
            }
        }
        
        if(x==0 &&i!=1){
            cout<<i<<endl;
            }
        
    }
}