#include<iostream>
using namespace std;
class publication{
    protected:
    float price;
    string name;
    public:
    void getdata(){
        cin>>price>>name;
    }
    void display(){
        cout<<name<<endl<<price<<endl;
    }
};
class book:public publication{
    protected:
    int count;
    public:
    void get(){
        cin>>count;
    }
    void dis(){
        cout<<count<<endl;
    }
};
class tap:public publication{
    protected:
    float min;
    public:
    void get(){
        cin>>min;
    }
    void dis(){
        cout<<min<<endl;
    }
};
int main(){
    tap t1;
    book b1;
    b1.getdata();
    b1.get();
    t1.getdata();
    t1.get();
    b1.display();
    b1.dis();
    t1.display();
    t1.dis();
}