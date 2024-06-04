#include<iostream>
using namespace std;
int main(){
    string x;
    getline(cin,x);
    int n;
    n=x.length();
    int v=0;
    int c=0;
    for(int i=0;i<n;i++){
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U'){
            v++;
        }
        else{
            c++;
        }
    }
    cout<<v<<" "<<c;
}