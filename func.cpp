#include<iostream>
using namespace std;
int fact(int x,int fact1){
    for(int i=1;i<=x;i++){
        fact1=fact1*i;
    }
    return fact1;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int fact1=1;
    int factn=fact(n,fact1);
    int factm=fact(m,fact1);
    int factc=fact(n-m,fact1);
    float w;
    

    w=factn/(factm*factc);
    
    cout<<w;
}