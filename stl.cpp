#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    for(int i=0;i<6;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    cout<<v1.at(4)<<endl;
    cout<<v1.capacity()<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
     for(int i=0;v1.size();i++){
        cout<<v1[i];
    }
    cout<<endl;
    v1.pop_back();
     for(int i=0;i<v1.size();i++){
        cout<<v1[i];
    }
    
}