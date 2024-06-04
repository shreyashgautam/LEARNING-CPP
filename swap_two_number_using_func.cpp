#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    swap(&a,&b);
    cout<<a;
    cout<<b;
}