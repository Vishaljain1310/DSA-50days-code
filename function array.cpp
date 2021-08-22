/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//function array
	#include<iostream>
	using namespace std;
	int printage(int arr[],int n){
	    cout<<"enter the size of array"<<endl;
	    cin>>n;
	  
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	}
	int main()
	{
	   int n;
	   int arr[]={11,12,13,14,15};
	   printage(arr,n);
	    return 0;
	}