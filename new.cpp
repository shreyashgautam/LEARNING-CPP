#include<iostream>
using namespace std;
int main(){
    for(int i=0;;i++){
        int n;
        cin>>n;
        int temp=0;
        for(int j=2;j<=n/2;j++){
            if(n%j==0){
                temp++;
                break;
            }
        }
        if(temp==0){
            break;
        }
    }
}