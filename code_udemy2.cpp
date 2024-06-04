#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"total number of small rooms to clean :"; 
    cin>>a;  
    cout<<"total number of large rooms to clean :";
    cin>>b;
    cout<<"price of cleaning small room is $25"<<endl;
    cout<<"price of cleaning large room is $35"<<endl;
    int total;
    total=25*a+35*b;
    cout<<"cost is : $"<<total<<endl;
    float tax;
    tax=0.06*total;
    cout<<"tax is : $"<<tax<<endl;
    float t;
    t=total+tax;
    cout<<"total estimation : $"<<t<<endl;
    cout<<"this estimation is for 30 days"<<endl;
}