#include<iostream>
using namespace std;
typedef struct todolist{
    string task;
    string status;
}todolist;
int main(){
    todolist t[100];
    int i=0;
    int n;
    cout<<"Enter the total number of task to be added"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>t[i].task;
        t[i].status="pending";
    }
    for(int k=0;;k++){
        cout<<"PRESS 1 TO ADD TASK"<<endl;
        cout<<"PRESS 2 TO VIEW TASK"<<endl;
        cout<<"PRESS 3 TO MARK TASK AS COMPLETED"<<endl;
        cout<<"PRESS 4 TO REMOVE TASK"<<endl;
        cout<<"PRESS 5 TO EXIT"<<endl;
        int x;
        cin>>x;
        if(x==1){
            cin>>t[i].task;
            t[i].status="pending";
            i++;
        }
        else if(x==2){
            for(int j=0;j<i;j++){
                cout<<t[j].task<<"\t"<<t[j].status<<endl;
            }
            cout<<endl;
        }
        else if(x==3){
            cout<<"ENTER WHICH TASK IS TO BE MARKED COMPLETED"<<endl;
            string a;
            cin>>a;
            int check=0;
            for(int j=0;j<i;j++){
                if(a==t[j].task){
                    t[j].status="completed";
                    cout<<"Successfully completed the task named "<<a<<endl;
                    check=1;
                }
            }
            if(check==0){
                cout<<"TASK IS NOT AVAILABLE"<<endl;
            }
        }
        else if(x==4){
            cout<<"ENTER WHICH TASK IS TO BE MARKED COMPLETED"<<endl;
            string b;
            cin>>b;
            int check1=0;
            for(int j=0;j<i;j++){
                if(b==t[j].task){
                    t[j].task="------";
                    t[j].status="--------";
                    cout<<"Successfully deleted the task named "<<b;
                    check1=1;
                }
            }
            if(check1==0){
                cout<<"TASK IS NOT AVAILABLE"<<endl;
            }
        }
        else{
            cout<<"THANK FOR JOINING"<<endl;
            break;
        }
    }
}