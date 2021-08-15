/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
 int num,rev=0,digit;
 cout<<"enter the number ";
 cin>>num;
 int temp=num;
 while(temp!=0){
    digit=temp%10;
    rev=(rev*10)+digit;
    temp=temp/10;
 }
 if(num==rev){
     cout<<"palindrome number :";
 }
 else{
     cout<<"not palindrome :";
 }

    return 0;
}
