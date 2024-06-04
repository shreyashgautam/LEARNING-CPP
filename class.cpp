#include<iostream>
using namespace std;
class fruit{
    public:
    string color;
    string name;
    int price;
};
int main(){
    fruit apple;
    apple.color="red";
    apple.name="apple";
    apple.price=100;
    cout<<apple.color<<endl<<apple.name<<endl<<apple.price<<endl;
}