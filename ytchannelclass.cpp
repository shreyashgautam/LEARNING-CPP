#include<iostream>
#include<string.h>
using namespace std;
class ytchannel{
    private:
    int subscribe;
    char name[100];
    char owner[100];
    public:
    ytchannel(char channelname[100],char ownername[100]){
        strcpy(name,channelname);
        strcpy(owner,ownername);
        subscribe=0;
    }
    void sub(){
        subscribe++;
    }
    void unsub(){
        if(subscribe>0)
        subscribe--;
    }
    void details(){
        cout<<name<<" "<<owner<<" "<<subscribe;
    }

};
int main(){
    char channelname[100];
    char ownername[100];
    cin>>channelname;
    cin>>ownername;
    ytchannel y1(channelname,ownername);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0){
            y1.sub();
        }
        else{
            y1.unsub();
        }
    }
    y1.details();
}