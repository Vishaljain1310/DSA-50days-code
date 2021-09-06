/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    string str1="helleh";
    string str=str1;
   // cout<<str.size();
    for(int i=0;i<str.size()/2;i++){
        char temp;
        temp=str[i];
        str[i]=str[str.size()-1-i];
        str[str.size()-1-i]=temp;
    }
   if(str1==str){
       cout<<"it is a palindrom";
   }
   else{
       cout<<"it is not a palindrome";
   }
   return 0;
}
