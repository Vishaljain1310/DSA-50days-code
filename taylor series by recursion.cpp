/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
double taylor(int x, int n){
    static double num=1;
    static double den=1;
    static double term;
    if(n==0){
        return 1;
    }
    else{
        term=taylor(x,n-1);
        num=num*x;
        den=den*n;
        return (term +num/den);
    }
}

int main()
{
    cout<<taylor(5,10)<<endl;;

    return 0;
}
