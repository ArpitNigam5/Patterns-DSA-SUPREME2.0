#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int count = 1;

    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
            cout<<count++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    int startcount = 7;
    
    for(int i=0;i<n;i++){
        for(int k=0;k<2*n-2*i-1;k++){
            if(k%2==0){
            cout<<startcount--;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }   
}