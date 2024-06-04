#include<iostream>
using namespace std;
int pow(int a,int b){
    static int  power=1;
    if(b==0){
        return power;
    }
    else{
        power=power*a;
        pow(a,b-1);
    }
}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    int ans;
    ans=pow(a,b);
    cout<<ans;
}