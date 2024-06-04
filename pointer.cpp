#include<iostream>
using namespace std;
int main(){
    int a;
    a=34;
    int *b=&a;
    int **c=&b;
    cout<<int(c)<<endl;
    cout<<int(b);
}