#include<iostream>
using namespace std;
class marks{
    protected:
    int roll;
    string name;
    int mark;
    public:
    marks(){
        roll=0;
        name="xyz";
    }
    void input(){
        cin>>roll>>name;
    }
    void out(){
        cout<<roll<<name<<endl;
    }
};
class phy:public marks{
    protected:
    int phym;
    public:
    void readdd(){
        cin>>phym;
        mark+=phym;
    }
    int resultss(){
        return phym;
    }
    
};
class chem:public marks{
    protected:
    int chemm;
    public:
    void readd(){
        cin>>chemm;
        
    }
    int results(){
        return chemm;
    }
};
class maths:public marks{
    protected:
    int mathm;
    public:
    void read(){
        cin>>mathm;
        
    }
    int result(){
        return mathm;
    }
};
int main(){
    maths m1;
    chem c1;
    phy p1;
    int total=0;
    m1.input();
    m1.read();
    total+=m1.result();
    c1.readd();
    total+=c1.results();
    p1.readdd();
    total+=p1.resultss();
    cout<<"total is: "<<total<<endl;
}