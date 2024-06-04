#include<iostream>
using namespace std;
class movie{
    string name;
    char rating;
    int watch;
    int hours;
    public:
    movie(){
        name="none";
        rating='n';
        watch=0;
        hours=0;
    }
    void set(){
        cin>>name>>rating>>hours;
    }
    void get(){
        cout<<name<<endl;
        cout<<rating<<endl;
        cout<<hours<<endl;
    }
};

int main(){
    movie m1;
}