/*


*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 


*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        for(int j=0;j<2*n-2*i-2;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i;k++){
            cout<<"* ";
        }
        for(int k=0;k<2*i;k++){
            cout<<"  ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}