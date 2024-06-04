#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    cin>>x;
    cin>>y;
    if(x>0 && y>0){
        cout<<"first quad";
    }
    else if(x<0 && y>0){
        cout<<"second quad";
    }
    else if(x<0 && y<0){
        cout<<"third quad";
    }
    else if(x==0 && y==0){
        cout<<"it is origin";
    }
    else{
        cout<<"fourth quad";
    }
}