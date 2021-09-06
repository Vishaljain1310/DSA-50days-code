/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int compare(string str1,string str2){
     for(int idx1=0,idx2=0; str1[idx1]!='\0'&& str2[idx2]!='\0';idx1++,idx2++){
        if(str1[idx1]!=str2[idx2]){
            if(str1[idx1]<str2[idx2]){
                return 1;
            }
        else{
            return -1;
        }
        }
     }
    }
int main()
{ 
    string str1="Hello vishal jain";
    string str2="Hello vishal mittal";
    cout<<compare(str1,str2);

    return 0;
}
