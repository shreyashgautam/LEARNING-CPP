#include<iostream>
using namespace std;
#include<set>
void exdisplay(int example[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<example[i][j];
            if(j!=2){
            cout<<" | ";
           }
        }
        
        cout<<endl;
        if(i!=2)
        cout<<"----------"<<endl;
        
        
    }
}
int checkrr(char arr[3][3],char choice){
    int ans=0;
    if(arr[0][0]==choice && arr[0][1]==choice && arr[0][2]==choice){
       return 1;
    }
    else if(arr[1][0]==choice && arr[1][1]==choice && arr[1][2]==choice){
        return 1;
    }
    else if(arr[2][0]==choice && arr[2][1]==choice && arr[2][2]==choice){
       return 1;
    }
    else if(arr[0][0]==choice && arr[1][0]==choice && arr[2][0]==choice){
       return 1;
    }
    else if(arr[0][1]==choice && arr[1][1]==choice && arr[2][1]==choice){
       return 1;
    }
    else if(arr[0][2]==choice && arr[1][2]==choice && arr[2][2]==choice){
       return 1;
    }
    else if(arr[0][0]==choice && arr[1][1]==choice && arr[2][2]==choice){
      return 1;
    }
    else if(arr[0][2]==choice && arr[1][1]==choice && arr[2][0]==choice){
        return 1;
    }
    return 0;
}
int allfull(char arr[3][3]){
    int full=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==' '){
                full=1;
            }
        }
    }
    return full;
}
void printmatrix(char arr[3][3]){
     
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<arr[i][j];
           if(j!=2){
            cout<<" | ";
           }
        }
        
        cout<<endl;
        if(i!=2)
        cout<<"---------"<<endl;
        
        
    }
}
int check(char arr[3][3],int x,int n){
    int actual=0;
    int rowa=0;
    if(x>=2){
        actual=x;
        rowa=0;
    }
    else if(x<=3 && x>=5){
        actual=x-3;
        rowa=1;
    }
    else{
        actual=x-6;
        rowa=2;
    }
    if(arr[rowa][actual]==' '){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    cout<<"WELCOME TO TICK TAC TAO"<<endl<<endl;
    char arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=' ';
        }
    }
    int example[3][3];
    int set=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            example[i][j]=set;
            set++;
        }
    }
    exdisplay(example);
    string a,b;
    cout<<"KINDLY ENTER PLAYER 1 NAME"<<endl;
    cin>>a;
    cout<<"KINDLY ENTER PLAYER 2 NAME"<<endl;
    cin>>b;
    int n=0;
    int ans;
    for(int i=0;;i++){
        if(n%2==0){
            cout<<"THE CHANCE IS OF "<<a<<endl<<endl;
            int pos1;
            cout<<"ENTER THE POSITION WHERE YOU WANT TO ADD  FROM (0 TO 8)"<<endl;
            cin>>pos1;
            if(pos1>8 || pos1<0){
                cout<<"YOU CAN'T PUT  OUTSIDE THE GRID !! "<<endl;
            }
            else if(pos1<=8 && pos1>=0){
                ans=check(arr,pos1,n);
                if(ans==1){
                    int actual=0;
                    int rowa=0;
                    int x=pos1;
                    if(pos1>=2){
                        actual=x;
                        rowa=0;
                    }
                    else if(x<=3 && x>=5){
                       actual=x-3;
                       rowa=1;
                    } 
                    else{
                    actual=x-6;
                    rowa=2;
                    }
                    
                        arr[rowa][actual]='O';
                    
                    
                    printmatrix(arr);
                    if(checkrr(arr,'O')==1){
                        cout<<"CONGRATS "<<a<<" YOU HAVE WON "  <<endl;
                        break;
                    }
                    n++;
                }
                else{
                    cout<<"SORRY THAT POSITION IS ALREADY OCUPIED"<<endl;
                }
            }
        }
        if(allfull(arr)==0){
            cout<<"THE GAME HAS ENDED NO ONE HAS WON THE GAME"<<endl;
            cout<<"TIED"<<endl;
            break;
        }
        
        if(n%2==1){
            cout<<"THE CHANCE IS OF :"<<b<<endl<<endl;
            int pos1;
            cout<<"ENTER THE POSITION WHERE YOU WANT TO ADD  FROM (0 TO 8)"<<endl;
            cin>>pos1;
            if(pos1>8 || pos1<0){
                cout<<"YOU CAN'T PUT  OUTSIDE THE GRID !! "<<endl;
            }
            else if(pos1<=8 && pos1>=0){
                ans=check(arr,pos1,n);
                if(ans==1){
                    int actual=0;
                    int rowa=0;
                    int x=pos1;
                    if(pos1>=2){
                        actual=x;
                        rowa=0;
                    }
                    else if(x<=3 && x>=5){
                       actual=x-3;
                       rowa=1;
                    } 
                    else{
                    actual=x-6;
                    rowa=2;
                    }
                    
                    arr[rowa][actual]='X';
                    
                    
                    printmatrix(arr);
                    if(checkrr(arr,'X')==1){
                        cout<<"CONGRATS "<<b<<" YOU HAVE WON "  <<endl;
                        break;
                    }
                    n++;
                }
                else{
                    cout<<"SORRY THAT POSITION IS ALREADY OCUPIED!!"<<endl;
                }
            }
        }
        
        if(allfull(arr)==0){
            cout<<"THE GAME HAS ENDED NO ONE HAS WON THE GAME"<<endl;
            cout<<"TIED"<<endl;
            break;
        }
        
    }
    cout<<"THANKS FOR PLAYING MADE AND MANAGED BY SHREYASH GAUTAM VIT CHENNAI"<<endl;
    cout<<"FOR FEEDBACK OR ISSUES CONTACT ME ON :"<<endl;
    cout<<"EMAIL:shreyashgautam2007@gmail.com "<<endl;
}