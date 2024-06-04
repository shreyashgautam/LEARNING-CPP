#include<iostream>
using namespace std;
class student{
    int subject1;
    int subject2;
    public:
    student(){
        subject1=0;
        subject2=0;
    }
    void getdata(){
        cin>>subject1;
        cin>>subject2;
    }
    student operator + (student s){
        student temp;
        temp.subject1=subject1+s.subject1;
        temp.subject2=subject2+s.subject2;
        return temp;
    }
    void print(){
        cout<<subject1<<" " <<subject2;
    }
};
int main(){
    student s[5];
    for(int i=0;i<5;i++){
        s[i].getdata();
    }
    student s6;
    for(int i=0;i<5;i++){
        s6=s6+s[i];
    }
    s6.print();
}