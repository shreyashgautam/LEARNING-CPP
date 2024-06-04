#include<iostream>
using namespace std;

class phy{
    protected:
    int m_in_phy;
    
    
};
class chem{
    protected:
    int m_in_chem;
    
};
class maths{
    protected:
    int m_in_maths;
};
class marks:protected maths,protected chem,protected phy{
    protected:
    int roll;
    string name;
    int mark;
    public:
    void inpp(){
        cin>>roll>>name>>m_in_chem>>m_in_maths>>m_in_phy;
    }
    void total(){
        mark=m_in_chem+m_in_maths+m_in_phy;
        cout<<mark;
    }
};
int main(){
    int n;
    cin>>n;
    marks m1[n];
    for(int i=0;i<n;i++){
        m1[i].inpp();
        m1[i].total();
    }
}
