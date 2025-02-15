#include <iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter rows:";
    cin>>rows;
    for(int i=rows-1;i>=0;i--){
        for(int j=rows-i-1;j>=0;j--){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++)
            cout<<"*";
        cout<<endl;
    }
}