#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=x;i>=0;i--){
        cout<<endl;
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
    }
}