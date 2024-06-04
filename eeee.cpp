#include<iostream>
using namespace std;
class pla{
    private:
    static int to;
    int score;
    public:
    void fight(){
        cout<<"FIGHTING AND INCREASING THE SCORE UP"<<endl;
        score=score+50;
    }
    pla(){
        to++;
        cout<<"PLAYER "<<to<<"JOINED THE GAME"<<endl;
        
    }
    ~pla(){
        to--;
        cout<<"1 PLAYER LEFT THE GAME"<<endl;
    }
    friend class managment;
};
int pla::to = 0;
class managment{
    public:
    static void checkgame(pla p[],int n){
        int x=0;
        for(int i=0;i<n;i++){
            
            if(p[i].score<100){
                x=1;
                break;
            }
        }
        if(x==1){
            cout<<"NOT ALL PLAYERS HAVE COMPLETED THE GAME "<<endl;
        }
        else{
            cout<<"ALL PLAYERS HAVE SUCCESSFULLY COMPLETED THE GAME"<<endl;
        }
    }
};
int main(){
    int n;
    cin>>n;
    pla p[n];
    for(int i=0;i<n;i++){
        p[i].fight(); //JAB TAK SCORE EK PARTICULAR LEVEL ie 100 YA USSE UPER NA HO JAYE TAB TAK CHECK GAME KA OUTPUT NOT SUCCESS HI AAYEGA.
    }
    // check by removing this comment
    // for(int i=0;i<n;i++){
    //     p[i].fight(); 
    //     }
    managment::checkgame(p,n);
}