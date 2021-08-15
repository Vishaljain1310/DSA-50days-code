/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void tower(int n ,char a, char b, char c){
    if(n>0){
        tower(n-1,a, c, b);
        cout<<"move from "<<a<<" to "<<c<<endl;
        tower(n-1,b, a, c);
    }
}

int main()
{
   
  tower(3,'a','b','c');
    return 0;
}
