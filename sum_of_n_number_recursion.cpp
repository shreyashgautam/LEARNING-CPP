#include<iostream>
using namespace std;
int rec(int n,int i){
    static int sum=0;
    if(i<=n){
        sum=sum+i;
        rec(n,i+1);
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int i=1;
    int sum=rec(n,i);
    cout<<sum;
}