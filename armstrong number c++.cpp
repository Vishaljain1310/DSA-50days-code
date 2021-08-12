#include<iostream>
#include<math.h>
using namespace std;

bool chkA(int num){
    int digit=0,temp=num;
    while(temp!=0){
        digit++;
        temp/=10;
    }
    int sum=0;
    for(temp=num; temp!=0;temp/=10){
        
        sum=sum + pow(temp%10, digit);
    }
    
    if(sum==num){
         cout<<"This is an arms.. number ";
    }
    else{
        cout<<"Not a arms... number ";
    }

}
int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    chkA(num);
    // if(result){
    //         cout<<"This is an arms.. number ";
    // }
    // else{
    //     cout<<"Not a arms... number ";
    // }
}
