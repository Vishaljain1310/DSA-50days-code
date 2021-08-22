//search different element in  the array
#include <iostream>

using namespace std;

int differentelement(int arr[],int n){
    int answer=0;
    cout<<"Enter the size of array";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        answer=answer^arr[i];
    }
        if(answer==0){
            return -1;
        }
        else{
            return answer;
        }
    
}

int main()
{
    int arr[100],n;
    cout<<"the different element is "<<differentelement(arr,n);

    return 0;
}