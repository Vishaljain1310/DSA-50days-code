/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
double taylorloop(int x, int n){
    double num=1;
    double den=1;
    double tylor=1;
    for(int i=1;i<=n;i++){
        num=num*x;
        den=den*i;
        tylor=tylor + num/den;
    }
}

int main()
{
    cout<<taylorloop(1,10)<<endl;;

    return 0;
}
