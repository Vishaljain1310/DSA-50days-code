/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>lst;
    list<int>lst1{5,2,1,7,3,4};
    
    for(auto ele:lst1){
        cout<<ele<<" ";
    }
  cout<<endl;
  
  lst1.push_back(9);
  lst1.push_front(0);
  
  cout<<lst1.front()<<" "<<lst1.back()<<endl;
  
  for(auto it=lst1.begin(); it!=lst1.end();it++){
      cout<<(*it)<<" ";
  }
  
}
