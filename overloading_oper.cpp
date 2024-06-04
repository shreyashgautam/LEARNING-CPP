#include<iostream>
using namespace std;
class sample{
    int x;
    int y;
    public:
    sample(){
        x=0;
        y=0;
    }
    void read(){
        cin>>x>>y;
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }
    void operator --(){
        x--;
        y--;
    }
    void operator -(){
        x=-x;
        y=-y;
    }
};
int main(){
    sample s1;
    sample s2;
    s1.read();
    s2.read();
    --s1;
    -s2;
    s1.print();
    s2.print();
}