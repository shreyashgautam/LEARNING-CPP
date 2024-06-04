#include<iostream>
using namespace std;
int fact(int n,int i){
    static int fac=1;
    if(i<=n){
        fac=fac*i;
        fact(n,i+1);
    }
    else{
        return fac;
    }
}
int main(){
    int a;
    cin>>a;
    int i=1;
    int x=fact(a,i);
    cout<<x;
}