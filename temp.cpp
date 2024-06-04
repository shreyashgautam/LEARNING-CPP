#include<iostream>
using namespace std;
template<class t>
class vector{
    t arr[100];
    t size;
    public:
    vector(t s,t a[100]){
        size=s;
        for(int i=0;i<5;i++){
            arr[i]=a[i];
        }
    }
    void print(){
        for(int i=0;i<5;i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    int s=5;
    int a[s]={10,30,40,50,20};
    vector<int> m(s,a);
    m.print();
    double ss=10.2;
    double aa[5]={10.2,23.4,45.5,66.7,77.7};
    vector<double>mdo(ss,aa);
    mdo.print();
    char sss='a';
    char aaa[5]={'a','b','c','d','e'};
    vector<char>mdoo(sss,aaa);
    mdoo.print();

}
