/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element at index number "<<i;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++){
    int MIN=a[i];
    int t;
        for(int j=i+1;j<n;j++){
            if(a[j]<MIN){
                MIN=a[j];
                t=j;
            }
        }
       if(MIN<a[i])
       {
        a[t]=a[i];
        a[i]=MIN;
   }
    }
    cout<<endl;
    cout<<"selection sorting is"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
