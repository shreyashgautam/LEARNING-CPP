#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int dollar=0;
    int quarter=0;
    int dime=0;
    int nickel=0;
    int penny=0;
    dollar =x/100;
    if(x>=100){
        x = x%100;
    }
   
    cout<<dollar<<endl;
    quarter=x/25;
    if(x>=25){
        x=x%25;
    }
    cout<<quarter<<endl;
    
    dime=x/10;
    if(x>=10){
        x=x%10;
    }
    cout<<dime<<endl;
    nickel=x/5;
    if(x>=5){
        x=x%5;
    }
    cout<<nickel<<endl;
    penny=x;
    cout<<penny<<endl;
}