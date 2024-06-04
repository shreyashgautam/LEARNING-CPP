#include<iostream>
#include<deque>
using namespace std;
void display(deque<int> d){
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" "; 
    }
    cout<<endl;
}
int main(){
    deque <int> d;
    d.push_back(1);
    d.push_front(2);
    display(d);
    cout<<d.at(1);
}