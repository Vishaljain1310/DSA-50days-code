#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
 int pascal=1;
 for(int i=0;i<n;i++){
     for(int j=1;j<=n-i;j++){
     cout<<" ";
     }
     for(int j=0;j<=i;j++){
         if(i==0 || j==0){
             pascal=1;
         }
         else{
             pascal=pascal*(i-j+1)/j;
         }
         cout<<pascal<<" ";
     }
     cout<<endl;
    
 }
 
}