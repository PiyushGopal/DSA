/* input 4
  output
  * * * * 
    * * *
      * *
        *
        
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
    
    int k=0;
    
    
    while(n>0){
        for(int i=0;i<k;i++){
            cout<<" ";
        }
        for(int i=0;i<n;i++){
            cout<<"*";
        }
        n--;
        k++;
        cout<<endl;
    }
    

    return 0;
}
