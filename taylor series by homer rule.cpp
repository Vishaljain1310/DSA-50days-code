/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
double taylorhonor(double x, double n){
   
   static double temp=1;
   if(n==0){
       return temp;
   }
   else{
       temp=1+(x/n *temp);
       return taylorhonor(x,n-1);
   }
}

int main()
{
    cout<<taylorhonor(1,10)<<endl;;

    return 0;
}
