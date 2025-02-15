// Rectangle pattern
//* * * * * *
//* * * * * *
//* * * * * *
//* * * * * *
//* * * * * *
//* * * * * *


#include <iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter rows and columns";
    cin>>row;
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}