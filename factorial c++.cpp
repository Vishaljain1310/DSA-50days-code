/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else if(n>1){
        return n*factorial(n-1);
    }
    else{
        return -1;
    }
}

int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
   cout<<factorial(num);

    return 0;
}
