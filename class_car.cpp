#include<iostream>
#include<string.h>
using namespace std;
class car{
    char name[100];
    char brand[100];
    int price;
    int year;
    public:
    car(char n[100],char b[100],int p,int y){
         strcpy(name,n);
         strcpy(brand,b);
         price=p;
         year=y;
    }
    void details(){
        cout<<"the name of the car is "<<name<<"\nthe name of brand is "<<brand<<"\nthe price is "<<price<<"\nthe year launch is "<<year<<endl;
        }
};
int main(){
    char n[100];
    cin>>n;
    char b[100];
    cin>>b;
    int p;
    int y;
    cin>>p;
    cin>>y;
    car c1(n,b,p,y);
    c1.details();
}