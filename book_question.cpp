#include<iostream>
using namespace std;
class book{
    string author;
    string title;
    int price;
    string publisher;
    int stock;
    public:
    // book(){
    //     author="xyz";
    //     title="xyz";
    //     price=0;
    //     stock=0;
    //     publisher="xyz";
    // }
    void set(){
        cout<<"Enter the name of book: ";
        cin>>title;
        cout<<"\nEnter the name of author: ";
        cin>>author;
        cout<<"\nEnter the name of publisher: ";
        cin>>publisher;
        cout<<"\n Enter the price of the book: ";
        cin>>price;
        cout<<"\n Enter the stock of book: ";
        cin>>stock;
    }
    void get(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Publisher: "<<publisher<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Stock: "<<stock<<endl;
    }
    void search(string x,string y,int z){
        if(title==x && author==y){
            if(stock>=z){
                cout<<"total price: "<<z*price;
            }
            else{
                cout<<"required book is not is stock";
            }
        }
    }
};
int main(){
    
        cout<<"************Book Store************"<<endl;
        cout<<"1. INSERT DETAILS"<<endl;
        cout<<"2. DISPLAY"<<endl;
        cout<<"3.SEARCH"<<endl;
        cout<<"4.EXIT"<<endl;
        int a;
        int n;
        cout<<"Enter your choice: "<<endl;
        cin>>a;
        book b[100];
        
            cout<<"How many book data u want ot enter:";
            cin>>n;
            for(int i=0;i<n;i++){
                b[i].set();
            }
        cout<<"************Book Store************"<<endl;
        cout<<"1. INSERT DETAILS"<<endl;
        cout<<"2. DISPLAY"<<endl;
        cout<<"3.SEARCH"<<endl;
        cout<<"4.EXIT"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>a;
            for(int i=0;i<n;i++){
                b[i].get();
            }
        cout<<"************Book Store************"<<endl;
        cout<<"1. INSERT DETAILS"<<endl;
        cout<<"2. DISPLAY"<<endl;
        cout<<"3.SEARCH"<<endl;
        cout<<"4.EXIT"<<endl;
       cout<<"Enter your choice: "<<endl;
       cin>>a;
            string x;
            string y;
            int z;
            cout<<"Enter title of required book: ";
            cin>>x;
            cout<<"\nEnter author of required book: ";
            cin>>y;
            cout<<"\nPlease enter the required number of copies";
            cin>>z;
            for(int i=0;i<n;i++){
                b[i].search(x,y,z);
            }
            cout<<"\n************Book Store************"<<endl;
            cout<<"1. INSERT DETAILS"<<endl;
        cout<<"2. DISPLAY"<<endl;
        cout<<"3.SEARCH"<<endl;
        cout<<"4.EXIT"<<endl;
            cout<<"\nEnter your choice: "<<endl;
            cin>>a;
            cout<<"Exiting thanks you"<<endl;
}