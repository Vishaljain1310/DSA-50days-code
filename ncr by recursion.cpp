/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int ncr(int n, int r){
    if(r==0 || n==r){
        return 1;
    }
    else{
        return ncr(n-1,r-1)+ncr(n-1, r);
    }
}

int main()
{
   cout<<ncr(3,2);

    return 0;
}
