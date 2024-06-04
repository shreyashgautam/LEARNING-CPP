#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> numbers(5);
    for(int i=0;i<5;i++){
        cin>>numbers[i];
    }
    int x;
    cout<<"enter x";
    cin>>x;
    numbers.push_back(x);
    for(int i=0;i<6;i++){
        cout<<numbers.at(i);
    }  
}