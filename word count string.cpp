/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string str="  hello   my name is vishal   jain";
    int word=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ' && str[i+1]!=' '){
            word++;
        }
    }
    if(str[0]!=' '){
        word++;
    }
    else if(str[str.length()-1]==' '){
        word--;
    }
    
    
    
    cout<<word<<endl;
    return 0;
}
