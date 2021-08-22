/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//MAX AND MIN IN ARRAY
	#include<iostream>
	#include<climits>
	using namespace std;
	int main()
	{
	    int a[100];
	    int i;
	    int n;
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
	    int largest=INT_MIN;
	    int smallest=INT_MAX;
	    for(i=0;i<n;i++){
	        if(a[i]>largest){
	            largest=a[i];
	        }
	       if(a[i]<smallest){
	           smallest=a[i];
	       }
	    }
	    cout<<"largest number "<<largest<<endl;
	    cout<<"smallest number "<<smallest<<endl;
	}
