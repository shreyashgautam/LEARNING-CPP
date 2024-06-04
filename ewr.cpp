#include<iostream>
using namespace std;
int percentageLetter(char* s, char letter) {
    int len=0;
    for(int i=0;s[i]!='\0';i++){
        len++;
    }
    int x=0;
    for(int i=0;s[i];i++){
        if(s[i]==letter){
            x++;
        }
    }
    int ans=x/len;
    return len;
}
int main(){
    cout<<percentageLetter("footbar",'o');
}