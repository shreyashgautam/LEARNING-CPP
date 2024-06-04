#include<iostream>
using namespace std;
class reservation{
    string name;
    int age;
    string desc;
    int price;
    int quantity;
    public:
    reservation(){
        name="xyz";
        age=0;
        desc="xyz";
        price=0;
        quantity=0;
        cout<<"BOOKING TICKET IS NOW ON"<<endl;
    }
    ~reservation(){
        cout<<"THANKS FOR CANCELLING  THE TICKET"<<endl;
    }
    void display(){
        cout<<"NAME: "<<name<<endl;
        cout<<"AGE: "<<age<<endl;
        cout<<"DESTINATION: "<<desc<<endl;
        cout<<"PRICE: "<<price<<endl;
        cout<<"QUANTITY: "<<quantity<<endl;
        cout<<"TOTAL PRICE OF THE TICKET IS "<<price*quantity<<endl;
    }
    void read(){
        cout<<"enter your name: "<<endl;
        cin>>name;
        cout<<"enter your age: "<<endl;
        cin>>age;
        cout<<"enter your destination: "<<endl;
        cin>>desc;
        
        cout<<"enter the no of ticket: "<<endl;
        cin>>quantity;
        if(desc=="Mumbai"){
            price=1000;
        }
        else if(desc=="DELHI"){
            price=1999;
        }
        else if(desc=="KOLKATA"){
            price=2300;
        }
        else{
            price=2100;
        }
    }
    void book(string a,int b,string c,int d,int e){
        name=a;
        age=b;
        desc=c;
        price=d;
        quantity=e;
    }
};
int main(){
    reservation *r=new reservation();
    for(int i=0;;i++){
        cout<<"*********************"<<endl;
        cout<<"1.CONFIRMATION"<<endl;
        cout<<"2.CANCEL"<<endl;
        cout<<"3.DISPLAY"<<endl;
        cout<<"ENTER CHOICE: "<<endl;
        int x;
        cin>>x;
        if(x==1){
            r->read();
        }
        else if(x==3){
            r->display();
            
        }
        else if(x==2){
            delete r;
            break;
        }
    }
}