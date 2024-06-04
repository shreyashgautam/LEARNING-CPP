#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("ss");
    q.push("shs");
    q.push("Wasdf");
    cout<<q.front();
    cout<<q.empty();
    q.pop();
    cout<<q.front();
}