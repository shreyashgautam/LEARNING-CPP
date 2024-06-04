#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl;
        int x=1;
        for(int j=0;j<=i;j++){
            cout<<x;
            x++;
        }
    }
}