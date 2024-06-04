#include<iostream>
#include <cstdlib>
#include <time.h> 
using namespace std;
int main(){
    cout<<"Number Guessing Game"<<endl;
    cout<<"TO CLOSE MEANS DIFFERENCE IS 10"<<endl;
    cout<<"CLOSE MEANS DIFFERENCE IS 10 TO 40"<<endl;
    cout<<"FAR MEANS DIFFERENCE IS 40 TO 80"<<endl;
    cout<<"VERY FAR IS DIFFRENCE IS 80 TO 99"<<endl;
    srand(time(0));
    int n=rand() % 100;
    cout<<"GUESS THE NUMBER !!"<<endl;
    for(int i=0;;i++){
        int guess;
        cin>>guess;
        int a=n-guess;
        int b=guess-n;
        if(n==guess){
            cout<<"CONGRATES YOU HAVE CORRECTLY GUESSED THE GAME"<<endl;
            break;
        }
        else if(n>guess){
            cout<<"CHECK FOR A BIGGER NUMBER THAN THIS"<<endl;
            if(a<=10){
                cout<<"TO CLOSE"<<endl;
            }
            else if(a>10 && a<=40){
                cout<<"CLOSE"<<endl;
            }
            else if(a>40 && a<=80){
                cout<<"FAR"<<endl;
            }
            else{
                cout<<"VERY FAR"<<endl;
            }
        }
        else if(n<guess){
            cout<<"CHECK FOR A SMALLER NUMBER THAN THIS"<<endl;
            if(b<=10){
                cout<<"TO CLOSE"<<endl;
            }
            else if(b>10 && b<=40){
                cout<<"CLOSE"<<endl;
            }
            else if(b>40 && b<=80){
                cout<<"FAR"<<endl;
            }
            else{
                cout<<"VERY FAR"<<endl;
            }
        }
        cout<<"CONTINUE GUESSING THE NUMBER !!"<<endl;
    }
}