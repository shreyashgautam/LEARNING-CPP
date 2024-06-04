#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int number() {
    srand(time(0));
    int x=(rand() % 6 + 1);
    return x;
}
void data(){
    cout<<"SNACK ARE AT POSITION:"<<endl;
    cout<<"1. SNAKE AT 28 BRINGS BACK TO 10"<<endl;
    cout<<"2. SNAKE AT 37 BRINGS BACK TO 3"<<endl;
    cout<<"3. SNAKE AT 48 BRINGS BACK TO 16"<<endl;
    cout<<"4. SNAKE AT 75 BRINGS BACK TO 32"<<endl;
    cout<<"5. SNAKE AT 94 BRINGS BACK TO 71"<<endl;
    cout<<"6. SNAKE AT 96 BRINGS BACK TO 42"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"LADDER ARE AT POSITION:"<<endl;
    cout<<"1. LADDER AT 4 GOES TO 56"<<endl;
    cout<<"2. LADDER AT 12 GOES TO 50"<<endl;
    cout<<"3. LADDER AT 14 GOES TO 55"<<endl;
    cout<<"4. LADDER AT 22 GOES TO 58"<<endl;
    cout<<"5. LADDER AT 41 GOES TO 79"<<endl;
    cout<<"6. LADDER AT 54 GOES TO 88"<<endl;
    cout<<"--------------------------------"<<endl;
}
int main(){
    cout<<"WELCOME TO SNAKE AND LADDER"<<endl;
    int arr[10][10];
    int x=100;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=x;
            x--;
        }
    }
    
    for(int i=0;i<9;i++){
        cout<<"   ";
        for(int j=0;j<10;j++){
            cout<<arr[i][j]<<"   ";
            
        }
        cout<<endl;
    }
    x=1;
    cout<<"   ";
    for(int i=0;i<10;i++){
        cout<<x<<"    ";
        x++;
    }
    cout<<endl;
    data();
    string a,b;
    cout<<"KINDLY ENTER THE NAME OF PLAYER 1:";
    cin>>a;
    cout<<"\nKINDLY ENTER THE NAME OF PLAYER 2:";
    cin>>b;
    cout<<endl;
    int n=0;
    int starta=0;
    int startb=0;
    for(int i=0;;i++){
        if(n%2==0){
            cout<<"THE CHANCE IS OF PLAYER "<<a<<endl;
            // cout<<"KINDLY PRESS ANY LETTER TO ROLL THE DICE"<<endl;
            // string ans;
            // cin>>ans;
             x=number();
             cout<<"THE DICE IS ROLLING AND THE VALUE CAME IS "<<x<<endl;
            starta=starta+x;
            if(x!=6){
                n++;
            }
            if(starta==28){
                cout<<"SNACK BITE"<<endl;
                starta=10;
                
            }
            else if(starta==48){
                cout<<"SNACK BITE"<<endl;
                starta=16;
                
            }
            else if(starta==37){
                cout<<"SNACK BITE"<<endl;
                starta=3;
                
            }
            else if(starta==75){
                cout<<"SNACK BITE"<<endl;
                starta=32;
                
            }
            else if(starta==94){
                cout<<"SNACK BITE"<<endl;
                starta=10;
                
            }
            else if(starta==96){
                cout<<"SNACK BITE"<<endl;
                starta=42;
                
            }
            if(starta==4){
                cout<<"LADDER HERE!!!"<<endl;
                starta=56;
                
            }
            else if(starta==12){
                cout<<"LADDER HERE!!!"<<endl;
                starta=50;
                
            }
            else if(starta==14){
                cout<<"LADDER HERE!!!"<<endl;
                starta=55;
                
            }
            else if(starta==22){
                cout<<"LADDER HERE!!!"<<endl;
                starta=58;
                
            }
            else if(starta==41){
                cout<<"LADDER HERE!!!"<<endl;
                starta=79;
                
            }
            else if(starta==54){
                cout<<"LADDER HERE!!!"<<endl;
                starta=88;
                
            }
            if(starta>100){
                cout<<"SORRY THIS IS NOT POSIBLE"<<endl;
                starta=starta-x;
            }
            cout<<"CURRENT POSITION IS OF "<<a<<" IS "<<starta<<endl;
            if(x==6){
                cout<<"AS YOU SCORED 6 YOUR CHANCE COMES AGAIN!!"<<endl;
            }
            
        }
        if(starta==100){
            cout<<"CONGRATS "<<a<<" HAS WON THE GAME!!"<<endl;
            break;
        }
        else if(n%2!=0){
            cout<<"THE CHANCE IS OF PLAYER "<<b<<endl;
            // cout<<"KINDLY PRESS ANY LETTER TO ROLL THE DICE"<<endl;
            // string ans1;
            // cin>>ans1;
             x=number();
             cout<<"THE DICE IS ROLLING AND THE VALUE CAME IS "<<x<<endl;
            startb=startb+x;
            if(x!=6){
                n++;
            }
            if(startb==28){
                cout<<"SNACK BITE"<<endl;
                startb=10;
                
            }
            else if(startb==48){
                cout<<"SNACK BITE"<<endl;
                startb=16;
                
            }
            else if(startb==37){
                cout<<"SNACK BITE"<<endl;
                startb=3;
                
            }
            else if(startb==75){
                cout<<"SNACK BITE"<<endl;
                startb=32;
                
            }
            else if(startb==94){
                cout<<"SNACK BITE"<<endl;
                startb=10;
                
            }
            else if(startb==96){
                cout<<"SNACK BITE"<<endl;
                startb=42;
                
            }
            if(startb==4){
                cout<<"LADDER HERE!!!"<<endl;
                startb=56;
                
            }
            else if(startb==12){
                cout<<"LADDER HERE!!!"<<endl;
                startb=50;
                
            }
            else if(startb==14){
                cout<<"LADDER HERE!!!"<<endl;
                startb=55;
                
            }
            else if(startb==22){
                cout<<"LADDER HERE!!!"<<endl;
                startb=58;
                
            }
            else if(startb==41){
                cout<<"LADDER HERE!!!"<<endl;
                startb=79;
                
            }
            else if(startb==54){
                cout<<"LADDER HERE!!!"<<endl;
                startb=88;
                
            }
            if(startb>100){
                cout<<"SORRY THIS IS NOT POSIBLE"<<endl;
                startb=startb-x;
            }
            cout<<"CURRENT POSITION IS OF "<<b<<" IS "<<startb<<endl;
            if(x==6){
                cout<<"AS YOU SCORED 6 YOUR CHANCE COMES AGAIN!!"<<endl;
            }
            if(startb==100){
            cout<<"CONGRATS "<<b<<" HAS WON THE GAME!!"<<endl;
            break;
            }
            
        }
    }
}