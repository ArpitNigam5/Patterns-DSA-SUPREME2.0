/*

use formula :  C = C*(i-j)/j 

1
11
121
1331
14641


*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;


  for(int i=1;i<=n;i++){
      int C=1;
      for(int j=1;j<=i;j++){
          cout<<C;
          C = C * (i - j) / j;
      }
      cout<<endl;
  }
}

