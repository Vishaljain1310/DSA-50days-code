/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element at index"<<i<<" ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(i=1;i<n;i++){
       int temp=a[i];
        j=i-1;
    while(j>=0 && a[j]>temp){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
    }
    cout<<endl;
    cout<<"insertion sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}