/* input 4
output
A
B C
C D E
D E F G
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
    char c=65;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<c<<" ";
            c=c+1;
            j=j+1;
        }
        c=65+i;
        cout<<endl;
        i=i+1;
    }
    

    return 0;
}
