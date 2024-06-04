//class emp having eno, ename,sal
#include<iostream>
using namespace std;
class emp{
    private:
    int eno;
    string ename;
    int sal;
    public:
    void ip(){
        cout<<eno<<ename<<sal<<endl;
    }
    emp(){
        eno=0;
        ename="xyz";
        sal=0;
    }
    emp(int x,string y,int z){
        eno=x;
        ename=y;
        sal=z;
    }
};
int main(){
    emp e1;
    emp e2(100,"dipu",10000);
    e1.ip();
    e2.ip();
}