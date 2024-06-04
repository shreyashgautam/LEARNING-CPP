#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        char b='A';// char b=65; using ascii
        cout<<endl;
        for(int j=0;j<m;j++){
            cout<<b;
            b++;
        }
    }
}