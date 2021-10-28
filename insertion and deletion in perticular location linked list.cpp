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
  
 auto it=lst1.begin();
 it++;
 it++;
//  lst1.erase(it);  // remove the second pos 
lst1.insert(it,0);  //insert the second pos 0
//lst1.remove(7);   // remove the 7 from the linked list
  for(auto it=lst1.begin(); it!=lst1.end();it++){
      cout<<(*it)<<" ";
  }
  
}
