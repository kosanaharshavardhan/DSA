/*

     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *


*/

#include <iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter rows:";
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<=rows-1-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        cout<<endl;
     }
     rows-=1;
    for(int i=rows-1;i>=0;i--){
        cout<<" ";
        for(int j=rows-i-1;j>=0;j--){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++)
            cout<<"*";
        cout<<endl;
    }
}

//pattern
