/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int sum(int n){
    if(n==0){
        return n;
    }
    else{
        return n+sum(n-1);
    }
}

int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
   cout<<sum(num);

    return 0;
}
