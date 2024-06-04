#include<iostream>
using namespace std;
int main(){
    char a[10];
    int b1;
    int b2;
    int b3;
    int b4;
    int b5;
    int spoil=0;
    for(int i=0;i<10;i=i+1){
        cin>>a[i];
    }
    for(int i=0;i<10;i=i+1){
        
            if(a[i]==1){
                b1=b1+1;
            }
            else if(a[i]==2){
                b2++;
            }
            else if(a[i]==3){
                b3++;
            }
            else if(a[i]==4){
                b4++;
            }
            else if(a[i]==5){
                b5++;
            }
            else{
                spoil=spoil+1;
            }
    }
    int max;
    max=b1;
    if (max<b2){
        max=b2;
    };
    if (max<b3){
        max=b3;
    };
    if (max<b4){
        max=b4;
    };
    if (max<b5){
        max=b5;
    };
    cout<<max;
   
    return 0;


    
}