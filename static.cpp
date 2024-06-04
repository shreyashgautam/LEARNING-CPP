#include<iostream>
using namespace std;
class box{
    private:
    int l;
    int b;
    int h;
    static int box_count;
    public:
    box(){
        l=0;
        b=0;
        h=0;
        box_count++;
    }
    void read(){
        cin>>l>>b>>h;
        
    }
    void calcvolume(){
        int vol=l*b*h;
        cout<<vol;
    }
    void display(){
        cout<<box_count;
    }
};
int box::box_count=0;
int main(){
    box b1;
    b1.read();
    b1.calcvolume();
    box b2;
    b2.read();
    b2.calcvolume();
    box b3;
    b3.read();
    b3.calcvolume();
    cout<<endl;
    b3.display();
}