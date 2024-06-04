#include<iostream>
using namespace std;
int main(){
    for(int i=0; ;i++){
        int a;
        cin>>a;
        if(a%2==0){
            continue;
        }
        else{
            break;
        }
    }
    return 0;
}