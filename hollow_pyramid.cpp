/*

* 
* * 
*   * 
*     * 
* * * * * 

*/

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    for (int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==0 || i==n-1 || i==0 || j==i){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}