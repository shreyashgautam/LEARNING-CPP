#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="babbar";
    m[100]="shreyash";
    m[101]="dipu";
    for(int i=0;i<m.size();i++){
        cout<<m[i]<<i<<endl;
    }
}