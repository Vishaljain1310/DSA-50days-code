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
   int arr[]={1,2,3};
   do{
       for(auto a:arr){
           cout<<a<<" ";
       }
       cout<<endl;
   }while(next_permutation(arr,arr+3));

    return 0;
}
