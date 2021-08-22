/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

	#include<iostream>
	#include<climits>
	using namespace std;
	int binary_search(int a[],int n,int key){
	    int s=0;
	    int e=n-1;
	    while(s<=e){
	        int mid=(s+e)/2;
	        if(a[mid]==key){
	            return mid;
	        }
	        if(a[mid]>key){
	            e=mid-1;
	       
	        }
	        else{
	            s=mid+1;
	        }
	    }
	    return -1;
	}
	int main()
	{
	    int a[100];
	    int i;
	    int n,key;
	    cout<<"Size of array you want"<<endl;
	    cin>>n;
	    for( i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    cout<<"Array"<<endl;
	    for( i=0;i<n;i++)
	    {
	         cout<<a[i]<<",";
	    }
	   cout<<"Enter the key you  want to search ";
	   cin>>key;
	   cout<<binary_search(a,n,key)<<endl;
	}
