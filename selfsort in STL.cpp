/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<algorithm>

using namespace std;
int selfsort(int n1,int n2){
    return n1>n2;     //sort the arr in decending order
  //  return n1<n2   sort the arr in ascending order
}

int main()
{
    int arr[]={4,1,3,6,2,5,9,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr , arr+n , selfsort); 
    
    
    for(auto a:arr){
        cout<<a<<" ";
    }

    return 0;
}
