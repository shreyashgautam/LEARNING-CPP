#include<iostream>
using namespace std;
class person{
    int kg;
    
    public:
    void get(){
        cin>>kg;
       
    }
    
    void print(){
        cout<<kg<<" "<<endl;
    }
    person operator ++(){
        person temp;
        temp.kg=++kg;
        return temp;
    }
    person operator ++ (int){
        person temp;
        temp.kg=kg++;
        return temp;
    }
    void operator --(){
        --kg;
    }
};
int main(){
    person p1;
    p1.get();
    person p2;
    person p3;
    p2=++p1;
    p3=p1++;
    --p1;
    p2.print();
    p3.print();
    p1.print();
}