#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"ENTER THE NUMBER 1"<<endl;
    cin>>a;
    cout<<"ENTER THE NUMNER 2"<<endl;
    cin>>b;
    char operation;
    cout<<"ENTER THE OPERATION"<<endl;
    cin>>operation;
    switch(operation){
        case '+' : cout<<"SUM OF THE NUMBER IS "<<a+b<<endl;
        break;
        case '-' : cout<<"DIFFERENCE OF THE NUMBER IS "<<a-b<<endl;
        break;
        case '*' : cout<<"PRODUCT OF THE NUMBER IS "<<a*b<<endl;
        break;
        case '/' : cout<<"DIVISION OF THE NUMBER IS "<<a/b<<endl;
        break;
        default:
        cout<<"INVALID OPERATION"<<endl;
    }
}