/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={4,1,3,6,2,5,9,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr , arr+n); 
    
    
    for(auto a:arr){
        cout<<a<<" ";
    }
    // cout<<endl;
    
    // cout<<"Left rotation"<<endl;
    // rotate(arr,arr+2,arr+n);
    //  for(auto a:arr){
    //      cout<<a<<" ";
    //   }
      cout<<endl;
      cout<<"Right rotation"<<endl;
      rotate(arr,arr+n-2,arr+n);
      for(auto a:arr){
        cout<<a<<" ";
    }
    return 0;
}
