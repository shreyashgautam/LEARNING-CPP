#include<iostream>
using namespace std;
class human{
    protected:
    int age;
    string name;
    char sex;
};
class emp:protected human{
    protected:
    int sal;
    int e_no;
};
class manager:protected emp{
    protected:
    string dep;
    int no_of_emp;
    public:
    manager(){
        age=0;
        name="sf";
        sex='m';
        sal=1000;
        e_no=0;
        dep="management";
        no_of_emp=19;
    }
    
};
int main(){

}