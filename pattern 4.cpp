/* input 5
  output 
  1
  2 3
  3 4 5
  4 5 6 7
  5 6 7 8 9
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
    
    int i =1;
    
    while(i<=n){
        int count=i;
        int j =1;
        while(j<=i){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    

    return 0;
}
