#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int fact=1;
        for(int j=1;j<=i;j++){
            fact=fact*j;
        }
        cout<<"fact of "<<i<<"is"<<fact<<endl;
            }
}