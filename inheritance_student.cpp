#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    int total;
    public:
    student(){
        roll=0;
        total=0;
    }
    
};
class test:protected student{
    protected:
    int score;
    public:
    void to(){
        total=total+score;
    }
    void inp(){
        cin>>roll;
        cin>>score;
    }
};
class sports:protected student{
    protected:
    int sportsscore;
    public:
    void to(){
        total=total+sportsscore;
    }
    void disp(){
        cout<<total;
    }
    void inp(){
        cin>>sportsscore;
    }
};
int main(){
    test t1;
    sports s1;
    t1.inp();
    t1.to();
    s1.inp();
    s1.to();
    s1.disp();
}
