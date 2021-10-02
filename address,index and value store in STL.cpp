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
    int arr[]={2,4,3,67,54,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter the key";
    cin>>key;
    auto address=find(arr,arr+n,key);
    cout<<address<<endl;  //store the element
    cout<<*address<<endl;  //store the value
    int index=address-arr;  //store the element of index
    cout<<index;

    return 0;
}
