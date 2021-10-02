/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//sort element on the basis of sum of digits.
#include <iostream>
#include<algorithm>

using namespace std;
int sum(int n){
    int s=0;
    while(n>0){
    s=s+n%10;
    n=n/10;
    }
    return s;
}
bool selfsort(int n1,int n2){
    return sum(n1)<sum(n2);
}

int main()
{
    int arr[]={17,32,36,21,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,selfsort);
    for(auto a:arr){
        cout<<a<<endl;
    }
    
    return 0;
}
