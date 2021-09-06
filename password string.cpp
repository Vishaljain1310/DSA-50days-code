/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string str="Vishalj@123";
    int length=str.length();
    int upper=0;
    int lower=0;
    int number=0;
    int special=0;
    if(length>10){
        for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            upper++;
        }
         if(str[i]>='a' && str[i]<='b'){
            lower++;
        }
         if(str[i]>='0' && str[i]<='9'){
            number++;
        }
        else{
            special++;
        }
    }
    }
    if(upper>0 && lower>0 && number>0 && special>0){
        cout<<"valid password"<<endl;
    }
    else{
        cout<<"invalid password";
    }
    return 0;
}
