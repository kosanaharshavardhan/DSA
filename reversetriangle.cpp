/*
* * * * * *
* * * * * 
* * * * 
* * * 
* * 
* 

*/
#include <iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter rows:";
    cin>>rows;
    for(int i=rows;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
