#include<iostream>
using namespace std;
int main(){
    int x;
    int rem=0;
    int rev=0;
    cin>>x;
    int count=0;
    int sum=0;
    int product=1;
    while(x>0){
        rem=x%10;
        rev=rev*10+rem;
        sum=sum+rem;
        count++;
        product*=rem;
        x=x/10;
    }
    cout<<rev<<endl;
    cout<<count<<endl;
    cout<<sum<<endl;
    cout<<product<<endl;
}