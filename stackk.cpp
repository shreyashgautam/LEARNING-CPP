#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("hello");
    s.push("new");
    s.push("shrey");
    cout<<s.top();
    cout<<s.empty();
    cout<<s.size();
    s.pop();
    cout<<s.top();
    
}