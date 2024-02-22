/*

1*2*3*4
5*6*7
8*9
10

*/


#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int count = 1;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-2*i-1;j++){
            if(j%2==0){
                cout<<count++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}