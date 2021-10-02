/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<algorithm>

using namespace std;
bool func1(int n1,int n2){
    cout<<"Hello i am func1()"<<endl;
    return n1>n2;
}
int func2(bool (&func3)(int n1,int n2)){
    cout<<"i am a func2()"<<endl;
    int n1=5;
    int n2=10;
    if(func3(n1,n2)){
        return 5;
    }
    else{
        return 10;
    }
}

int main()
{
    cout<<func2(func1)<<endl;

    return 0;
}
