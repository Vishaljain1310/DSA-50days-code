/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int memory[1000];
int memoryfibonacci(int n){
    if(n<=1){
        memory[n]=n;
        return n;
    }
    else{
        if(memory[n-1]== -1){
            memory[n-1]=memoryfibonacci(n-1);
        }
          if(memory[n-2]== -1){
            memory[n-2]=memoryfibonacci(n-2);
        }
        memory[n]=memory[n-1] +memory[n-2];
        return memory[n];
    }
}

int main()
{
   for(int i=0;i<=1000;i++){
       memory[i]=-1;
   }
   cout<<memoryfibonacci(10);
    return 0;
}
