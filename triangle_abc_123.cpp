#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl;
        int x=1;
        char y='A';
        for(int j=0;j<=i;j++){
            if(i%2==0){
                cout<<x<<" ";
                x++;
            }
            else{
                cout<<y<<" ";
                y++;
            }
        }
    }
}