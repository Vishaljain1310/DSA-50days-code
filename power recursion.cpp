/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int power(int m ,int n){
    if(n==0){
        return 1;
    }
    
    if(n%2==0){
        return power(m*m,n/2);
    }
    else{
        return m*power(m*m,(n-1)/2);
    }
}

int main()
{
    int m,n;
    cout<<"enter the number";
    cin>>m>>n;
   cout<<power(m,n);

    return 0;
}
