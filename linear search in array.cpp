/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


	#include<iostream>
	using namespace std;
   int main(){
       int a[100];
       int n,age,i,key;
       cout<<"enter the size of array";
       cin>>n;
       //input
       for(i=0;i<n;i++){
           cin>>a[i];
       }
       //array
       for(i=0;i<n;i++){
           cout<<a[i]<<" ";
       }
       //linear search
       cout<<"enter the number you want to search"<<endl;
       cin>>key;
       for(i=0;i<n-1;i++){
           if(a[i]==key){
               cout<<key<<"element found at"<<i<<endl;
               break;
           }
       }
       if(i==n){
           cout<<"element not found";
       }
       return 0;
   }
