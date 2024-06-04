#include<iostream>
using namespace std;
class apple{
    protected:
    int no_of_apple;
};
class mango{
    protected:
    int no_of_mango;
};
class fruit: protected apple,protected mango{
    protected:
    int total;
    public:
    fruit(){
        total=0;
        no_of_apple=0;
        no_of_mango=0;
    }
    fruit(int a,int m){
        no_of_apple=a;
        no_of_mango=m;
    }
    void inp(){
        cin>>no_of_apple>>no_of_mango;
    }
    void to(){
        total=no_of_apple+no_of_mango;
        cout<<total;
    }
};
int main(){
    fruit f(100,200);
    fruit f1;
    f1.inp();
    f.to();
}