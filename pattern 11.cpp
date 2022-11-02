/* input 4

output 
    1
   121
  12321
 1234321
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
      /* printing space*/
      int s=n-i;
      while(s){
          cout<<" ";
          s--;
      }
      /* printing 1st triangle */
      int j=1;
      while(j<=i){
          cout<<j;
          j=j+1;
      }
      /*printing 2nd triangle*/
      int k=i-1;
      while(k){  /*triangle starting from 2nd row hence i-1 row*/
          cout<<k;
          k=k-1;
      }
      cout<<endl;
      i=i+1;
  }
  
     
    return 0;
}

