*/
  input 5
  output
  *
  **
  ***
  ****
  *****
  
  
  */
  /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

    return 0;
}
