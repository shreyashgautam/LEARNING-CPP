#include<iostream>
#include<vector>
using namespace std;
class inv{
    int id;
    string name;
    int price;
    string brand;
    int quan;
    public:
    inv(){}
    inv(int i,string n,int p,string b,int q){
        id=i;name=n;price=p;brand=b;quan=q;
    }
    void display(){
        cout<<id<<name<<price<<brand<<quan;
    }
    void datain(){
        cin>>id>>name>>price>>brand>>quan;
    }
    int match(string a){
        if(name==a){
            return 1;
        }
        else{
            return 0;
        }
    }
    void pur(string a){
        if(a==name){
            int x;
            cin>>x;
            if(x>=quan){
                quan=quan-x;
                cout<<"total price"<<price*x;
            }
            else{
                cout<<"sorry not available"<<endl;
            }
        }
    }
};
void add(vector<inv>v){
    int i;string n;int p;string b;int q;
    cin>>i>>n>>p>>b>>q;
    inv x(i,n,p,b,q);
    v.push_back(x);
}
int main(){
    vector<inv> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        add(v);
    }
    string a;
    int aa=0;
    for(int i=0;i<n;i++){
        if(v[i].match(a)==1){
            cout<<"present"<<endl;
            aa=1;
            break;
        }
    }
    if(aa==0){
        cout<<"not present "<<endl;
    }
    for(int i=0;i<n;i++){
        v[i].match(a);
    }
}
