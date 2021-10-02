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
    int arr[]={2,3,6,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter the key";
    cin>>key;
    cout<<address<<endl;
    auto address=binary_search(arr,arr+n,key);//if element is present in  the arr then print true(1) else false 
    auto lb=lower_bound(arr,arr+n,key); //print the address
    cout<<lb<<endl;
    int index=lb-arr;  //index value
    cout<<index;
    

    return 0;
}
