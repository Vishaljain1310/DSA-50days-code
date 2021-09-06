/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s0;
    string s1("vishal jain");
    
    string s2="ishu jain";
    string s3(s2);
    string s4=s1;
    char a[]={'a','b','c','d','e'};
    string s5(a);
    
    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
     if(s0.empty()){
        cout<<"s0 is s empty"<<endl;
    }
    s0.append("jain(Mittal)");
    cout<<s0<<endl;
    if(s0.empty()){
        cout<<"s0 is s empty"<<endl;
    }
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;
    s0="apple";
    s1="banana";
    cout<<s0.compare(s1)<<endl;
    if(s1>s0){
        cout<<"s1 is grater"<<endl;
    }
    string s="i am a engineer";
    int index=s.find("engineer");
    cout<<index<<endl;
    
    string word="engineer";
    int len=word.length();
    cout<<s<<endl;
    s.erase(index,len);
    cout<<s<<endl;
    for(int i=0; i<s1.length(); i++){
        cout<<s1[i]<<",";
    }
    for(auto it=s.begin(); it!=s.end();it++){
        cout<<(*it)<<",";
    }
    for(auto c:s1){
        cout<<c<<",";
    }
    
    
    return 0;
}
