#include<iostream>
using namespace std;
int main(){
    int a;
    int d;
    cin>>a;
    cin>>d;
    int c=0;
    int n;
    cin>>n;
    for(int i=a;;i=i+d){
        
        if(c!=n){
            cout<<i<<endl;
        }
        else{
            break;
        }
        c++;
    }
}