#include<iostream>
using namespace std;
int factor(int num){
   for(int i=1;i<=num;i++){
       if(num%i==0){
           cout<<i<<" ";
       }
   }
}

int main(){

     int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    cout<<factor(n);
}
