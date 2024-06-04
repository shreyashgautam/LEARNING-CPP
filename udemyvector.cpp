#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vector1;
    vector <int> vector2;
    vector1.push_back(10);
    vector2.push_back(20);
    cout<<vector1.size()<<endl;
    cout<<vector1.at(0)<<endl;
    vector <vector<int>> vector3;
    vector3.push_back(vector1);
    vector3.push_back(vector2);
    vector1.at(0)=1000;
    cout<<vector3.at(0).at(0)<<" "<<endl;
    cout<<vector3.at(1).at(0)<<" "<<endl;
}
