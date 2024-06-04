#include<iostream>
using namespace std;
class fair{
    string name;
    int price;
    int quantity;
    string place;
    int date;
    int month;
    int year;
    public:
    fair(){
        quantity=0;
        price=100;
    }
    void get(){ 
        cout<<"enter you name :"<<endl;
        cin>>name;
        cout<<"enter the place to go :"<<endl;
        cin>>place;
        cout<<"enter the amount of ticket you need to buy :"<<endl;
        cin>>quantity;
        cout<<"kindly enter the date you want to go in form of date month year: "<<endl;
        cin>>date;
        cin>>month;
        cin>>year;
    }
    
    int total(){
         if(place=="DELHI"){
            price=1000;
        }
        else if(place=="MUMBAI"){
            price=1500;
        }
        else if(place=="RANCHI"){
            price=800;
        }
        else{
            cout<<"sorry ticket for that place is not present at this point ";
            price=0;
        }
        int total=0;
        if(price!=0){
            total=price*quantity;
            cout<<"TOTAL IS : "<<total<<endl;
            
        }
        return total;
    }
    void gst(int total){
        float val;
        if(total!=0){
            val=0.18*total;
            cout<<"TOTAL AFTER ADDING GST IS : "<<gst;
        }
        else{
            cout<<"0.00"<<endl;
        }
        
    }
};
int main(){
    
}