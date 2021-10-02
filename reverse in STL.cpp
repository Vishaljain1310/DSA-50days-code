/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// 123
// 132
// 213
// 231
// 312
// 321
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
   int arr[]={2,1,3};
   reverse(arr,arr+3);
  
       for(auto a:arr){
           cout<<a<<" ";
       }
    
    return 0;
}
