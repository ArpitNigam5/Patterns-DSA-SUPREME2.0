/*

    * 
   * *   
  *   *     
 *     *       
*       *     


*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // outer loop
    for(int i=0; i<n; i++){
        // TODO 01: First
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
         // TODO 02: Second
         for(int j=0;j<2*i+1;j++){
             if(j==0||j==i){
                 cout<<"* ";
             }
             else{
                 cout<<"  ";
             }
         }
        
        cout<<endl;
    }
    return 0;
}


// 2nd method


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int pattern() {
    // Write C++ code here
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<1;j++){
            cout<<"*";
        }
        for(int j=1;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<1;j++){
            if(i==0){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
