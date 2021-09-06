/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
//   char strings[50]={'h','e','l','l','o'};
//     cout<<strings<<endl;
//     char stringb[]="hello";
//     cout<<stringb<<endl;
    string str="Hello World";
    // cout<<str.length()<<endl;
    // int length;
    // for(length=0;str[length] !='\0';length++){
        
    // }
    // cout<<length<<endl;
    
    for(int i=0; str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-'a'+'A';
        }
    }
   cout<<str<<endl;
   string str2="Hello world i am  a vishal jain";
   int ward=1;
   for(int i=0; str2[i]!='\0';i++){
       if(str2[i]==' '){
           ward++;
       }
   }
   cout<<ward<<endl;
   
   
   string str3="Hello   world i  am  a vishal  jain";
   int alpha=1;
   for(int i=0; str3[i]!='\0';i++){
       if(str3[i]==' '){
           alpha++;
       }
   }
   cout<<alpha<<endl;
    return 0;
}
