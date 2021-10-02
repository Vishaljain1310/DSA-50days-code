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
   int arr[]={1,2,5,10,20,50,100,200,500,1000,2000};
   int n=sizeof(arr)/sizeof(arr[0]);
   int key;
   cout<<"enter the key ";
   cin>>key;
   while(key>0){
   auto ub=upper_bound(arr,arr+n,key);
   int index=ub-arr;
   key=key-arr[index-1];
   cout<<arr[index-1]<<endl;
   }

    return 0;
}
