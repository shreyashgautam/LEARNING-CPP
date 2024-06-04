#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int b=1;
        cout<<endl;
        for(int j=0;j<m;j++){
            cout<<b;
            b++;
        }
    }
}