#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    for(int i=0;i<l.size();i++){
        cout<<i; 
    }
}