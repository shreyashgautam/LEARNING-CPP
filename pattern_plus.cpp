#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=1;
    for(int i=0;i<n;i++){
        cout<<endl;
        
        for(int j=0;j<n;j++){
            if(i==n/2||j==n/2){
                cout<<"+ ";
            }
            else{
                cout<<"# ";
            }
        }
    }
}