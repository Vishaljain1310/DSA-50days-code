/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main()
{
   int n,i,j;
   cout<<"enter the size of array ";
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cout<<"enter element at index "<<i<<" ";
       cin>>arr[i];
   }
   cout<<"The array is ";
   for(i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
  for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
          if(arr[i]>arr[j]){
              swap(arr[i],arr[j]);
          }
      }
  }
     cout<<"The array is after sorting ";
   for(i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}