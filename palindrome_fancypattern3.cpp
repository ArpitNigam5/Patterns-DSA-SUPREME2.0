/*

1
121
12321
121
1

*/


#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int d=n/2;
    
    for(int i=0;i<d;i++){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for(int k=i;k>0;k--){
            cout<<k;
        }
        cout<<endl;
    }
    for(int i=d;i>=0;i--){
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for(int k=i;k>0;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}