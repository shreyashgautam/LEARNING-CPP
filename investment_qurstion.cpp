#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int p;
    int r;
    int n;
    int v;
    cin>>p;
    cin>>r;
    cin>>n;
    int b;
    b=pow(1+r,n);
    v=p*b;
    cout<<v;
    
    
    return 0;
}